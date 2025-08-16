#include <stdio.h>
#include <string.h>  // 标准库strcpy声明

// 自定义 strcpy
char *my_strcpy(char *dest, const char *src) {
    char *p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

int main() {
    const char *src = "Hello, world!";

    // 使用自定义 strcpy
    char dest[50];
    my_strcpy(dest, src);
    printf("my_strcpy result: %s\n", dest);

    // 使用标准库 strcpy
    char dest2[50];
    strcpy(dest2, src);
    printf("strcpy result: %s\n", dest2);

    return 0;
}
