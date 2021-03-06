cmake_minimum_required(VERSION 3.14)

project(gemini VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

set(protobuf_MODULE_COMPATIBLE TRUE)
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${Protobuf_VERSION}")

set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_REFLECTION gRPC::grpc++_reflection)
if(CMAKE_CROSSCOMPILING)
  find_program(_PROTOBUF_PROTOC protoc)
else()
  set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
endif()

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_GRPC_GRPCPP gRPC::grpc++)
if(CMAKE_CROSSCOMPILING)
  find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
  set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)
endif()

include_directories(${PROJECT_SOURCE_DIR}/pb)
aux_source_directory(pb PB_FILE)

# https://github.com/pokowaka/jwt-cpp#usage
include_directories(/usr/local/include)
include_directories(/usr/include/openssl)

set(_OPEN_SSL /usr/lib/x86_64-linux-gnu/openssl-1.0.0)
set(_JWT /usr/local/lib -lcrypto -ljwt -lssl)

# executable
add_executable(${PROJECT_NAME} source/main.cpp ${PB_FILE})
target_link_libraries(${PROJECT_NAME} PRIVATE ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF} ${_JWT} ${_OPEN_SSL})
