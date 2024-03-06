#include <stdio.h>

int main(void)
{
	int sum;
	
	int i;
	i=2;
	while(i <= 100){
		/*if(i % 2 == 0){
		sum = sum + i;
		}
		++i;*/
		sum = sum + i;
		i = i + 2;
	}

	printf("sum[1, 100] only even numbers: %d\n", sum);
	return 0;
}
