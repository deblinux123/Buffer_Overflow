#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void win()
{
	printf("You have successfully exploit this programe!.\n");
	exit(0);
}

void vuln()
{
	char message[20];
	gets(message);
	printf("This is your message: %s\n", message);
}


int main()
{
	vuln();
	return 0;
}

