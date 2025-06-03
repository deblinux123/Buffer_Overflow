#include <stdio.h>

int main() {
    char name[8];
    printf("Enter your name:\n");

    // ورودی دستی بدون محافظ
    scanf("%s", name); // استفاده‌ی ناامن، مشابه gets

    printf("Hello, %s\n", name);
    return 0;
}


