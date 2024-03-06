#include <stdio.h>

int main(void)
{
	int number;
	int divide;
	
   printf("무슨 숫자?: ");
   scanf("%d",&number);
   
   divide = 0 != number%2;
   
   printf("Result: %d\n", divide);
   
   return 0;
   
}
