#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int local_var = 1234;
    char buffer[8];
    strcpy(buffer, "AAAAAAAA\xE7\x03\x00\x00");
    printf("local variable: %d\n", local_var);
    return 0;
}

