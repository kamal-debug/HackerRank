#define a 10
#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n",a);
    #define a 50
    printf("%d",a);
    
    return 0;
}



