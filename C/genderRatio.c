#include <stdio.h>

int main(void)
{
	//int man, girl;
	//double manRatio, womanRatio;
	int man, woman;
	
	scanf("%d %d", &man, &woman);
	//scanf("%d %d", &man, &woman);
	
	//manratio = 1.0 * man / (man+woman) * 100;
	//womanratio = (0.0 + woman) / (man+woman) * 100;
	double manRatio = (double)man / (double)(man + woman) * (double)100;
	double womanRatio = (double)woman / (double)(man + woman) * (double)100;
	
	printf("man = %d AND manratio = %.2f%%\n",man, manRatio);
	printf("woman = %d AND womanratio = %.2f%%\n",woman, womanRatio);
	
	return 0;
}
