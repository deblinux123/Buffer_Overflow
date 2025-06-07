#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char message[20] = "Safe message";
	char buffer[8];

	gets(buffer);

	printf("Message: %s\n", message);
	return 0;
}

