#include <stdio.h>
#include <string.h>


int main()
{
	char name[8];
	printf("Enter your name:\n");
	fgets(name, sizeof(name), stdin);
	printf("Hello, %s\n", name);

	return 0;
}

