#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[] = "kamalkants";

    char *ptr;
    ptr=str;

    int count =0;

    while (*ptr!='\0')
    {
        ptr++;
        count++;
    }
    printf("string length is:%d\n",count);
    

    return 0;
}
