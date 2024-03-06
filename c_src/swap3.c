#include <stdio.h>

int a, b;		//global var.

void swap()
{	
	//swap
	int tmp = a;
	a = b;
	b = tmp;	
	

}

/*void swap(int *pa, int *pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}*/
	
int main(void)
{
	a = 100;
	b = 200;
	printf("a: %d\tb: %d\n", a, b);

	swap();
	
	printf("a: %d\tb: %d\n", a, b);
	return 0;
}
