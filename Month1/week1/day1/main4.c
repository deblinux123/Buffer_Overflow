#include <stdio.h>
#include <stdlib.h>


int global_var = 10;
static int static_var = 5;


int main()
{
	int local_var = 1;
	char *heap_var = malloc(20);

	printf("Address of code :    %p\n", main);
	printf("Address of global:   %p\n", &global_var);
	printf("Address of static:   %p\n", &static_var);
	printf("Address of local:    %p\n", &local_var);
	printf("Address of heap:     %p\n", heap_var);

	free(heap_var);
	return 0;
}

