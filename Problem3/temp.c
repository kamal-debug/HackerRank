#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r = 20;
    int *p = &r;

    fun(&p);
    printf("%d",*p);
    getchar();
    return 0;
}
void fun(int **p)
{
    static int q =10;
    *p=&q;
}
