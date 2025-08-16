#include <stdio.h>
#include <string.h>  // 标准库strlen声明

// 自定义 strlen
size_t my_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    const char *s = "Hello, world!";

    // 使用自定义 strlen
    printf("my_strlen: %zu\n", my_strlen(s));

    // 使用标准库 strlen
    printf("strlen: %zu\n", strlen(s));

    return 0;
}
