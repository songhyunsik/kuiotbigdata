#include <stdio.h>
int main(void)
{
	double fahr;
	int celsius;
	
	//celsius = 40;
	scanf("%d", &celsius);
	fahr = celsius * 9 / 5 + 32;
	
	printf("celsius: %d ---> fahr %.1f\n", celsius, fahr);
		
	return 0;
}
