#include <stdio.h>
int main(void)
{
	int fahr;
	int celsius1000;
	
	fahr = 100;
	//celsius = (fahr - 32) / 0.9 * 0.5;
	//celsius2 = (fahr - 32) / 0.9;
	celsius1000 = 1000 * 5 * (fahr - 32) / 9;
	
	int left = celsius1000 / 1000;
	//int right = (celsius1000 - celsius1000 / 1000 * 1000 + 5) / 10;
	int right = (celsius1000 % 1000 +5) / 10;
	//printf("celsius1000: %d\n", celsius1000);	
	
	printf("fahr : %d ---> celsius : %d.%d\n", fahr, left, right);
	return 0;
	
}
