#include <stdio.h>
int main(void)
{
	int width, high;
	double area;
	scanf("%d %d", &width, &high);
	area = 1.0 / 2.0 * (width*high);
	printf("area: %.1f\n", area);
	return 0;
}
