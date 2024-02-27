#include <iostream>
#include "ClientData.pb.h"

int main(int argc, char *argv[])
{
    ClientData::Client newClient;
    newClient.set_first_name("Jimmy");
    newClient.set_last_name("Avery");
    newClient.set_age(32);
    newClient.set_role(ClientData::Client::Developer);

    int size = newClient.ByteSize();
    char *buffer = (char *) malloc(size);
    newClient.SerializeToArray(buffer, size);

    //Send data over UDP
    int s;
    struct sockaddr_in sock_info;
    unsigned int s_len = sizeof(sock_info);
    if ((s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1) {
        printf("Unable to open socket()");
    }
    memset((char *) &sock_info, 0 sizeof(sock_info));
    so_other.sin_family = AF_INET;
    sock_info.sin_port = htons(15500);
    sock_info.sin_addr.s_addr = inet_addr(destAddr);
    if ((sendto(s, buffer, size, 0, (struct sockaddr *) &sock_info, s_len)) == -1) {
        printf("Unable to complete sendto()");
    }
    close(s);

    //Free malloced data
    free(buffer);

    return 0;
}