#include <stdio.h>

char *gets(char *);


int main()
{
	char name[8];
	printf("Enter your name: \n");
	gets(name);

	printf("hello, %s\n", name);
	return 0;
}
