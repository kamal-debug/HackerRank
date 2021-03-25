#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a no.\n");
    scanf("%d",&a);

    if(a&1)
        printf("odd number\n");
    else
        printf("even Number\n");
    return 0;
}
