FROM ubuntu:18.04 AS development

ARG GPRC_VERSION=1.34.0

ENV CMAKE_INSTALL_DIR /local
ENV PATH $PATH:/grpc/cmake/build
ENV PATH $PATH:/grpc/cmake/build/third_party/protobuf
ENV PATH $PATH:$CMAKE_INSTALL_DIR/bin

RUN apt-get update && \
    apt-get install -y \
            git \
            wget \
            clang \
            ca-certificates \
            build-essential \
            libssl-dev \
            make \
            autoconf \
            automake \
            pkg-config \
            libtool \
            golang \
            curl

# Install cmake
RUN wget -q -O cmake-linux.sh https://github.com/Kitware/CMake/releases/download/v3.17.0/cmake-3.17.0-Linux-x86_64.sh && \
    mkdir -p $CMAKE_INSTALL_DIR && \
    sh cmake-linux.sh -- --skip-license --prefix=$CMAKE_INSTALL_DIR && \
    rm cmake-linux.sh

# Install grpc
RUN git clone --recurse-submodules -b v${GPRC_VERSION} https://github.com/grpc/grpc && \
    cd grpc && \
    mkdir -p cmake/build && \
    pushd cmake/build && \
    cmake -DgRPC_INSTALL=ON \
        -DgRPC_BUILD_TESTS=OFF \
        -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR \
        ../.. &&\
    make -j && \
    make install

# Build
WORKDIR /gemini

# Generate *.pb files
RUN rm -f ./pb
RUN protoc -I proto \
           --grpc_out=./pb \
           --cpp_out=./pb \
           --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`
           proto/order.proto

# Make binary
RUN mkdir build && cd build && cmake .. && make