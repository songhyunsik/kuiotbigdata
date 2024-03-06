#include <stdio.h>

int main(void)
{
	int score;
	int cutline;
	printf("당신의 점수는?: ");
	scanf("%d", &score);
	
	cutline = (60 <= score);
	printf("THIS IS YOUR TEST RESULT: %d\n", cutline);
	
	return 0;
}
