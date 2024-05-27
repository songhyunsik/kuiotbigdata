#include <stdio.h>
#include <string.h>
int main(void)
{
    /*int num = 3;
    int score[num];
    //float score[5];
    int i;
    int total = 0;
    double avg;
    //int count;

    // printf("score[0]의 주소%p\n", score);
    // printf("score[1]의 주소%p\n", score+1);

    int num = sizeof(score)/sizeof(int);

    //count = sizeof(score) / sizeof(score[0]);   // score 배열의 크기만큼 / score 배열의 0번째 크기만큼큼

    for(i = 0; i< num; i++)   // for문을 이용하여 socre 입력받기
    {
       scanf("%d", &score[i]);
    }

    for(i = 0; i< num; i++)   // score 배열 값을 total에 더하기
    {
        total += score[i];
    }
    //avg = total / (double)count;    // 실수형으로 평균구하기
    avg = (double)total / num;

    for(i = 0; i< num; i++)   // 입력받은 score값들 출력
    {
       printf("%d ", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);  // 평균 출력

    return 0;*/

    //-------------------------------------------------------------------------------------------

    /*//char str [] = {'a','p','p','l','e','j','a','m'};  // 문자 배열  // NULL 값이 안들어감.
    char str [] = {"applejam"};  // 문자열 배열 // NULL 값이 들어감
    
    //int size = sizeof(str); //char가 1이므로 나누어도 의미가 없다.
    //printf("%d\n",size);
    //printf("%ld\n", sizeof(str)/sizeof(str[0])); // 배열 0번의 크기가 1이므로 아무 지장이 없다.
    
    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);

    return 0;*/

    //-------------------------------------------------------------------------------------------

    /*char str1[80] = "cat";
    char str2[80];
    char *p;

    p = strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

    printf("%s \n", p);*/

    //-------------------------------------------------------------------------------------------

    char str[5];
    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);

    return 0;
}