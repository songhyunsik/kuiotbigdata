#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	printf("input size : ");
	scanf("%d", &size);
	
	//int nums[size];	//after c99
	int *pArr = malloc(sizeof(int) * size);
	
	for(int i = 0; i < size; ++i){
		//nums[i] = i + 1;
		pArr[i] = i + 1;
	}
	for(int i = 0; i < size; ++i){
		//printf("%d ", nums[i]);
		printf("%d ", pArr[i]);
	}
	printf("\n");
	
	free(pArr);
	return 0;
}
