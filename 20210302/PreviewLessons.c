//
// Created by Niucong on 2021/3/2.atoi,atof,strtod,strcmp,strcmpi,strstr,strcat,tolower
//

//函数名: tolower
//        功  能: 把字符转换成小写字母
//        用  法: int tolower(int c);
//程序例:

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int mainTolower(void)
{
    int length, i;
    char *string = "THIS IS A STRING";

    length = strlen(string);
    for (i=1; i<length; i++)
    {
        string[i] = tolower(string[i]);
//        toupper()
    }
    printf("%s\n",string);

    return 0;
}

//函数名: strcat
//        功  能: 字符串拼接函数
//        用  法: char *strcat(char *destin, char *source);
//程序例:

#include <string.h>
#include <stdio.h>

int mainStrcat(void)
{
    char destination[25];
    char *blank = " ", *c = "C++", *Borland = "Borland";

    strcpy(destination, Borland);
    strcat(destination, blank);
    strcat(destination, c);

    printf("%s\n", destination);
    return 0;
}

//函数名: strstr
//        功  能: 在串中查找指定字符串的第一次出现
//        用  法: char *strstr(char *str1, char *str2);
//程序例:

#include <stdio.h>
#include <string.h>

int mainStrstr(void)
{
    char *str1 = "Borland International", *str2 = "nation", *ptr;

    ptr = strstr(str1, str2);
    printf("The substring is: %s\n", ptr);
    return 0;
}

//函数名: strncmpi
//        功  能: 将一个串中的一部分与另一个串比较, 不管大小写
//        用  法: int strncmpi(char *str1, char *str2, unsigned maxlen);
//程序例:

#include <string.h>
#include <stdio.h>

int mainStrcmpi(void)
{
    char *buf1 = "BBB", *buf2 = "bbb";
    int ptr;

    ptr = strcmpi(buf2, buf1);

    if (ptr > 0)
        printf("buffer 2 is greater than buffer 1\n");

    if (ptr < 0)
        printf("buffer 2 is less than buffer 1\n");

    if (ptr == 0)
        printf("buffer 2 equals buffer 1\n");

    return 0;
}



//函数名: strcmp
//        功  能: 串比较
//        用  法: int strcmp(char *str1, char *str2);
//程序例:

#include <string.h>
#include <stdio.h>

int mainStrcmp(void)
{
    char *buf1 = "aaa", *buf2 = "bbb", *buf3 = "ccc";
    int ptr;

    ptr = strcmp(buf2, buf1);
    if (ptr > 0)
        printf("buffer 2 is greater than buffer 1\n");
    else
        printf("buffer 2 is less than buffer 1\n");

    ptr = strcmp(buf2, buf3);
    if (ptr > 0)
        printf("buffer 2 is greater than buffer 3\n");
    else
        printf("buffer 2 is less than buffer 3\n");

    return 0;
}

//函数名: strtod
//        功  能: 将字符串转换为double型值
//        用  法: double strtod(char *str, char **endptr);
//程序例:

#include <stdio.h>
#include <stdlib.h>

int mainStrtod(void)
{
    char input[80], *endptr;
    double value;

    printf("Enter a floating point number:");
    gets(input);
    value = strtod(input, &endptr);
    printf("The string is %s the number is %lf\n", input, value);
    return 0;
}

//函数名: atof
//        功  能: 把字符串转换成浮点数
//        用  法: double atof(const char *nptr);
//程序例:
#include <stdlib.h>
#include <stdio.h>

int mainAtof(void)
{
    float f;
    char *str = "12345.67";

    f = atof(str);
    printf("string = %s float = %f\n", str, f);
    return 0;
}


//函数名: atoi
//        功  能: 把字符串转换成长整型数
//        用  法: int atoi(const char *nptr);
//程序例:
#include <stdlib.h>
#include <stdio.h>

int mainAtoi(void)
{
    int n;
    char *str = "12345.67";

    n = atoi(str);
    printf("string = %s integer = %d\n", str, n);
    return 0;
}


