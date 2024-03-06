#include <stdio.h>

int main(void)
{
	int i;
	
	i = 65;
	while(i <= 90){
		printf("%c", i);
		++i;
	}
	printf("\n");
	
	return 0;
}

/*{
	char c;
	
	c = (char)'A';
	while((int)c <= 'Z'){
		printf("%c", (int)c);
		++c;
	}
	printf("\n");
	
	return 0;
}*/
