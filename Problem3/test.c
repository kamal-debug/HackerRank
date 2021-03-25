#include<stdio.h>

char* fun();

int main(int argc, char const *argv[])
{
    printf("%s",fun()+printf("I see you"));
    getchar();
    return 0;
}
char* fun()
{
    return "awake";
}
