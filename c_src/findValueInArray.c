#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20 , 40, 80, 70, 100, 30, 60};
	
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int i;
	for(i = 0; i < 10; ++i){
		if(value == nums[i]){
			//found
			break;
		} /*else{
			//not found
		}*/
	}
	
	if(i != 10){
		//found
		printf("%d is found. index : %d\n", value, i);
	} else{
		//not found
		printf("%d is not found.\n", value);
	}
	
	return 0;
}
