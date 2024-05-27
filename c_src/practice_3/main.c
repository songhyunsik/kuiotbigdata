#include <stdio.h>

int main(void)
{
    int kor = 3, eng = 5, mat = 4;
    int creadits;
    int res;
    float kscore = 3.8, escore = 4.4, mscore = 3.9;
    float grade;

    creadits = kor + eng + mat;
    grade = (kscore + escore + mscore) / 3; // 4.0333
    /*if (creadits >= 10 && grade > 4.0)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }*/
    res = (creadits >= 10 && grade > 4.0) ? 1 : 0;
    printf("%d\n", res);

    res = (sizeof(short) > sizeof(long)) ? 1:0;
    printf("%d\n", res);


    return 0;
}