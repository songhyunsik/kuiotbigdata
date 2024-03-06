#include <stdio.h>

int sumArray(const int *pArr int size)		//constant
//int sumArray(int pArrp[], int size)
//int sumArray(int pArr[10], int size)
{
	int sum = 0;
	for(int i = 0; i < size; ++i){
		sum = sum + pArr[i];			// *(pArr + i)
	}
	return sum;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20 , 40, 80, 70, 100, 30, 60};
	
	int sum;
	sum = sumArray(nums, 10);		//sum = sumArray(nums[0]);
	//sum = sumArray(nums + 5, 5);	// &nums[5]
	
	printf("sum: %d\n", sum);
	return 0;
} // 첫번쨰 앨리먼트의 시작주소와 사이즈를 전달한다
