FROM ubuntu:18.04 AS development

ENV CMAKE_INSTALL_DIR /local
ENV PATH $PATH:/grpc/cmake/build
ENV PATH $PATH:/grpc/cmake/build/third_party/protobuf
ENV PATH $PATH:$CMAKE_INSTALL_DIR/bin

WORKDIR /

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
            curl \
            lcov

WORKDIR /

# Install cmake
RUN wget -q -O cmake-linux.sh https://github.com/Kitware/CMake/releases/download/v3.17.0/cmake-3.17.0-Linux-x86_64.sh && \
    mkdir -p $CMAKE_INSTALL_DIR && \
    sh cmake-linux.sh -- --skip-license --prefix=$CMAKE_INSTALL_DIR && \
    rm cmake-linux.sh

WORKDIR /

# Install grpc
RUN git clone -b v1.34.0 https://github.com/grpc/grpc && \
    cd /grpc && \
    git submodule update --init && \
    mkdir -p cmake/build && \
    cd cmake/build && \
    cmake ../.. && \
    make && \
    make install && \
    ldconfig 

WORKDIR /

# Install Jwt-cpp
RUN git clone https://github.com/pokowaka/jwt-cpp.git && \
    cd jwt-cpp && \
    mkdir -p release && \
    cd release && \
    cmake -DCMAKE_BUILD_TYPE=Release .. && \
    make install

# Build
WORKDIR /gemini

# Generate *.pb files
RUN rm -f ./pb
RUN protoc -I proto \
           --grpc_out=./pb \
           --cpp_out=./pb \
           --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
           proto/auth.proto

# Make binary
RUN mkdir -p build && cd build && cmake .. && make
Run binary

# run binary
WORKDIR /gemini
RUN ./build/gemini