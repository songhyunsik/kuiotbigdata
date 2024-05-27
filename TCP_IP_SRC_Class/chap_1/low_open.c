#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void error_handling(char *message);

int main(void)
{  
    int fd;
    char buf[] = "Let's go!\n";

    fd = open("data.txt", O_CREAT|O_WRONLY|O_TRUNC);     // 파일 디스크립터

    if(fd == -1) {
        error_handling("open() error()");
    }

    if(write(fd, buf, sizeof(buf)) == -1) {
        error_handling("open() error()");
    }

    close(fd);

    return 0;
}

void error_handling(char *message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}