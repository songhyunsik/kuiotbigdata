#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // printf("argc = %d\n\r", argc);

    // for(int i = 0; i < argc; i++) {
    //     printf("argv[%d] = %s\n\r", i, argv[i]);
    // }

    if(argc != 3) {
        printf("Usage : %s <op1>, <op2> \n\r", argv[0]);
        return -1;
    }
    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);
    printf("%d + %d = %d\n\r", op1, op2, op1 + op2);

    return 0;
}