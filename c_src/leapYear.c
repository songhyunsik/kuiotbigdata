#include <stdio.h>

int main()
{
	int year;
	printf("입력할 연도: ");
	scanf("%d", &year);
	
	int leap;
	leap = ((year % 4 == 0) && (year % 100 == 0) &&(year % 400 == 0)) || ((year % 4 == 0) && (year % 100 != 0) &&(year % 400 != 0));
	
	printf("%d --- 윤년: %d\n", year, leap);
	return 0;
}
