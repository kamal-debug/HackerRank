#include<stdio.h>

int main(int argc, char const *argv[])
{
    char a[]= {'A','B','C','D'};
    char *ppp =&a[0];

    *ppp++;

    printf("%c%c\n",*++ppp,--*ppp);

    return 0;
}
