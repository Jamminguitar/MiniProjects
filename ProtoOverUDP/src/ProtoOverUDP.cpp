#include <iostream>
#include <asio.hpp>
#include "../build/schema/ClientData.pb.h"

int main()
{
    try
    {
        asio::io_context io_context;
        asio::ip::udp::socket socket{io_context};
        socket.open(asio::ip::udp::v4());

        socket.send_to(
            asio::buffer("Hello World!"),
            asio::ip::udp::endpoint{asio::ip::make_address("10.15.60.93"),3303}
        );
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    
    return 0;
}