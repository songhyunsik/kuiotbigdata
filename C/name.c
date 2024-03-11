#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//char name[21];

	//char *name; 	// X segmentation error!	
	
	//char buf[21];
	
	//char *name = buf;
	
	char *name = malloc(sizeof(char) * 21);
	
	scanf("%20s", name);		// scanf("%s", %name[0]);

	printf("%s\n", name);	// printf("%s", &name[0]);
	return 0;
}
