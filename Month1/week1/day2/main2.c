#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int global_var = 90;

int main()
{
	static int static_var = 89;
	int local_var = 100;
	char buffer[8];
	char *heap_var = (char *)malloc(10);
	strcpy(buffer, "AAAAAAAA\xE7\x03\x00\x00");
	
	printf("local variable now after boffer overflow is %d\n :) \n", local_var);
	printf("Address of Code (main):      %p\n", main);
   	printf("Address of Global Variable:  %p\n", &global_var);
   	printf("Address of Static Variable:  %p\n", &static_var);
   	printf("Address of Local Variable:   %p\n", &local_var);
        printf("Address of Buffer:           %p\n", buffer);
   	printf("Address of Heap Variable:    %p\n", heap_var);

        free(heap_var);

	return 0;

}

