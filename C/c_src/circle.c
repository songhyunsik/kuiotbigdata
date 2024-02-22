#include <stdio.h>
#define PI 3.141592
int main(void)
{
	int radius;
	double area;
	
	scanf("%d", &radius);
	area = PI * radius * radius;
	
	printf("area: %.2f\n", area);
	
	return 0;
}
