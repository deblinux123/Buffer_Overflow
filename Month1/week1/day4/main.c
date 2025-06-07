#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void secret()
{
	printf("Access Granted! You've hacked the sesytem.\n");
	exit(0);
}


void vulnerable()
{
	char buffer[10];
	gets(buffer);
	printf("You Enterd: %s\n");
}


int main()
{
	vulnerable();
	return 0;
}









