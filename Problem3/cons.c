#include<stdio.h>

int main(int argc, char const *argv[])
{
    const char *s = "";
    char str[]="Hello";
    s=str;
    while(*s)
    {
        printf("%c",*s++);
    }
    return 0;
}
