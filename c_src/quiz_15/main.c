#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char sik;
    int num1, num2, size, oper_pos = 0;
    char str[30] = {"\n"};    //
    char num1_str[10] = {"\n"}, num2_str[10] = {"\n"};

    //while (1)
    //{
        printf("? ");

        scanf("%[^\n]s", str);
        //gets(str);  //문자열 입력받기(엔터가 눌려질 때까지)

        // 피연산자와 연산자를 구분해서 변수에 저장
        // 연산자의 위치를 출력
        size = sizeof(str);
        printf("%d\n", size);
        for(int i = 0; i< size; i++)
        {
            // [3][+][7][] --- []  0 ~ 29
            if(str[i] == '+' || str[i] == '-' || str[i] == '%' || str[i] == '/' || str[i] == '*')
            {
                sik = str[i];
                oper_pos = i;
                break;
            }
        }

        // 2. 피연산자를 숫자로 바꾸어서 저장
        
        
        
        
        //for문
        for(int i =0; i< oper_pos - 1; i++)
        {
            num1_str[i] = str[i];
        }
        
        num1_str[oper_pos] = '\0';
        num1 = atoi(num1_str);

        for(int i = oper_pos; i< size; i++)
        {
            if(str[(oper_pos+2)] == '\0')
            {

            }
            num2_str[i-4] = str[i];
        }
        num2_str[oper_pos] = '\0';
        num2 = atoi(num2_str);

        // num1_str[0] = str[0];
        // num1_str[1] = '\0';
        // num1 = atoi(num1_str);

        // num2_str[0] = str[4];
        // num2_str[1] = str[5];
        // num2_str[2] = '\0';
        // num2 = atoi(num2_str);
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);

    //     switch (sik)
    //     {
    //     case '+':
    //         printf("%d %c %d = %d", num1, sik, num2, num1 + num2);
    //         break;
    //     case '-':
    //         printf("%d %c %d = %d", num1, sik, num2, num1 - num2);
    //         break;
    //     case '*':
    //         printf("%d %c %d = %d", num1, sik, num2, num1 * num2);
    //         break;
    //     case '/':
    //         printf("%d %c %d = %d", num1, sik, num2, num1 / num2);
    //         break;
    //     case '%':
    //         printf("%d %c %d = %d", num1, sik, num2, num1 % num2);
    //         break;
    //     default:
    //         printf("다시 입력하시오.\n");
    //         continue;
    //     }
    //     printf("\n");
   // }

    return 0;
}