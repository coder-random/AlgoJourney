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

