#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "GET / HTTP/1.1\r\n\r\n";
    char server_reply[2000];

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_addr.s_addr = inet_addr("93.184.216.34"); // example.com
    server.sin_family = AF_INET;
    server.sin_port = htons(80);

    connect(sock, (struct sockaddr *)&server, sizeof(server));
    send(sock, message, strlen(message), 0);
    recv(sock, server_reply, 2000, 0);

    printf("%s", server_reply);

    close(sock);
    
}
