#include <stdio.h>

int main(void)
{
	int sum;
	
	for(int i = 1; i <= 10; ++i){
		sum = sum + i;
	}

	printf("sum[1, 10] : %d\n|", sum);
	return 0;
}
