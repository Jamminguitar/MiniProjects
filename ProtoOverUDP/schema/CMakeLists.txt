ADD_LIBRARY(
   ProtoFiles
)

set_target_properties(ProtoFiles PROPERTIES LINKER_LANGUAGE CXX)


protobuf_generate(TARGET ProtoFiles PROTOS ClientData.proto)

set(protoschema ${protoschema}
    ClientData.pb.cc
    ClientData.h
)