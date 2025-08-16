---
title: putchar和getchar
date: 2025-07-28
updated: 
feature: false
categories:
  - Code101
tags:
  - c/cpp
mp3: 
cover: /images/article-cover/Code101.png
abstract: 
abstracts:
---

:::details 《Code101-C语言基础》目录

- [先导课 从零到一：你的第一堂C语言入门课](https://coder-random.pages.dev/post/Code101%2F000%E4%BB%8E%E9%9B%B6%E5%88%B0%E4%B8%80%EF%BC%9A%E4%BD%A0%E7%9A%84%E7%AC%AC%E4%B8%80%E5%A0%82C%E8%AF%AD%E8%A8%80%E5%85%A5%E9%97%A8%E8%AF%BE)
- [第一课 变量和常量](https://coder-random.pages.dev/post/Code101%2F001变量和常量)
- [第二课 printf和scanf](https://coder-random.pages.dev/post/Code101%2F002printf和scanf)
- [第三课 putchar和getchar](https://coder-random.pages.dev/post/Code101%2F003putchar和getchar)
- [第四课 C语言运算符](https://coder-random.pages.dev/post/Code101%2F004C语言运算符)

:::

# putchar和getchar

- putchar: 向屏幕输出一个字符

```c
#include <stdio.h>
int main(){
    char ch = 'a';
    putchar(ch); // 输出a
}
```

- getchar: 从键盘获得一个字符

```c
#include <stdio.h>
int main(){
    char ch;
    ch = getchar();// 获取一个字符
    printf("ch = %c\n", ch);
}
```

