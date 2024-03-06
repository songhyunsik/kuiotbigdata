#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b){
		//a,b
		if(c > a){
			// c, a, b
			printf("max: %d mid: %d min: %d\n",c,a,b);
			} else if(c>b){
				// a,c, b
				printf("max: %d mid: %d min: %d\n",a,c,b);
			} else {
				// a,b,c
				printf("max: %d mid: %d min: %d\n",a,b,c);
			}
	} else {
		//b,a
		if(c>b){
			// c,b,a
			printf("max: %d mid: %d min: %d\n",c,b,a);
		}else if(c>a){
			// b,c,a
			printf("max: %d mid: %d min: %d\n",b,c,a);
		}else {
			//b,a,c
			printf("max: %d mid: %d min: %d\n",b,a,c);
		}
	}
	
	return 0;
}
