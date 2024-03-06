#include <stdio.h>

int main()
{
	int year;
	scanf("%d", &year);
	
	int isleap;
	isleap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	isleap = (year % 400 == 0)) ||((year % 4 == 0) && (year % 100 != 0);
	
	printf("%d is a leap : %d\n", year, isleap);
	return 0;
}
