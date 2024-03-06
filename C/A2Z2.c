#include <stdio.h>

int main(void)
{
	//int code;
	//scanf("%d", &code);
	char code;
	scanf("%c",&code);
	
	//int isBig = (65 <= code && code <= 90);
	int isBig = ('A' <= code && code <= 'Z');
	
	printf("%c --- is Big: %d\n", code, isBig);
	return 0;
}
