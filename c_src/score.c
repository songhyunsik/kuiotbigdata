#include <stdio.h>
int main(void)
{
	int korean,english,math;
	int sum;
	double average;
	scanf("%d %d %d", &korean, &english, &math);
	sum = korean+english+math;
	average = sum/3.0;
	printf("sum: %d\taverage: %.2f\n", sum, average);
	
	return 0;
}
