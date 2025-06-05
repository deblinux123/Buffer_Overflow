#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void secret() {
    printf("Access Granted!\n");
    exit(0);
}

int main() {
    char buffer[16];
    gets(buffer);  // BOF here
    printf("Goodbye\n");
    return 0;
}


