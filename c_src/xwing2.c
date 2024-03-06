#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 5; ++i){
	 for(int j = 1; j <= 6-i; ++j){
		if(j==6-i){
			printf("*");
			}
		else {
			printf(" ");
			}
		}
		for(int j = 6-i; j >= i; --j){
		if(j==6-i){
			printf("*");
			}
		else {
			printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
