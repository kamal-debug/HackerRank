#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x =20, *y,*z;
    
    y = &x;
    printf("%d\n",y);
    z=y;
    *y++;
    *z++;
    x++;

    printf("x=%d\n,y=%d\n,z=%d\n",x,y,z);

    return 0;
}
