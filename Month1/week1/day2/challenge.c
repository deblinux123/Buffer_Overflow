#include <stdio.h>
#include <stdlib.h>


int global_var = 30;

int main()
{
	static int static_var = 99;
	int local_var = 78;
	char buffer[10];
	char *heap_ptr = malloc(32);

	printf("Address of Code (min)       : %p\n", main);
	printf("Address of global variable  : %p\n", &global_var);
	printf("Address of static variable  : %p\n", &static_var);
	printf("Address of local variable   : %p\n", &local_var);
	printf("Address of buffer           : %p\n", buffer);
	printf("Address of heap pointer     : %p\n", heap_ptr);


	free(heap_ptr);
	heap_ptr = NULL;

	return 0;
}

