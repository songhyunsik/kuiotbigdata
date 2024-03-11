#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "hello. world";
	int len = strlen(str1);
	
	printf("len : %d\n", len);
	
	//char str2[13];
	//char *str2;		// segmetation error!
	//char str2[12]; // boundary error 12 --> over 13!!
	strcpy(str2, str1);
	
	printf("str2 : %s\n", str2);
	
	if (strcmp(str1, str2) == 0) {
		printf("str1 and str2 are equal\n");
	} else {
		printf("str1 and str2 are not equal\n");
	}
	
	return 0;
}
