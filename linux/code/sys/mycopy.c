#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFSIZE 1024

int main(int argc, char **argv)
{
    if(argc < 3){
        perror("Usage...");
        exit(1);
    }
    int sfd, dfd;
    int ret, len;
    char buf[BUFSIZE];
    sfd = open(argv[1], O_RDONLY);
    if(sfd < 0){
        perror("open()");
        exit(1);
    }

    dfd = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0666);
    if(dfd < 0){
        close(sfd);
        perror("open()");
        exit(1);
    }

    while(1){
        ret = read(sfd, buf, BUFSIZE);
        if(ret < 0){
            perror("read()");
            break;
        }
        if(ret == 0){
            break;
        }
        len = write(dfd, buf, ret);
        if(len < 0){
            perror("write()");
            exit(1);
        }
    }

    close(dfd);
    close(sfd);
    exit(0);
}

