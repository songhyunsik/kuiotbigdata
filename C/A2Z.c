#include <stdio.h>

int main(void)
{
	int num;
	printf("INPUT ASC: ");
	scanf("%d", &num);
	
	int result;
	result = 65 <= num && num<= 90;
	
	printf("A to Z: %d\n", result);
	
	return 0;
}
