#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char buffer[8];
	int secret = 0;

	gets(buffer);
	printf("The value of the secret is : %d\n", secret);

	return 0;
}

