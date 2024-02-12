cmake_minimum_required(VERSION 3.14)

project(
    proto_over_udp
    VERSION 1.0
    LANGUAGES CXX)

set(sources ${sources} 
    src/ProtoOverUDP.cpp
)

ADD_SUBDIRECTORY(libs)

add_executable(proto_over_udp ${sources})

TARGET_LINK_LIBRARIES(
   proto_over_udp PRIVATE
   asio
)
