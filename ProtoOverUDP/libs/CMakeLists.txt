ADD_LIBRARY(
   asio
   asio-1.28.0/include/asio.hpp
)

set_target_properties(asio PROPERTIES LINKER_LANGUAGE CXX)

target_compile_definitions(asio PUBLIC ASIO_STANDALONE)

TARGET_INCLUDE_DIRECTORIES(
   asio PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/asio-1.28.0/include"
)