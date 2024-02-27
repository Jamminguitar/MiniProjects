cmake_minimum_required(VERSION 3.14)

project(
    proto_over_udp
    VERSION 1.0
    LANGUAGES CXX)

find_package(Protobuf REQUIRED)

ADD_SUBDIRECTORY(schema)


set(sources ${sources} 
    src/ProtoOverUDP.cpp
)

add_executable(proto_over_udp ${sources} ${protoschema})


TARGET_LINK_LIBRARIES(
   proto_over_udp
   ProtoFiles
)
