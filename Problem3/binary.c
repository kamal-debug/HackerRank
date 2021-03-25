// 00110

#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    int n;
    int sum=0,i;
    printf("Enter binary Number\n");
    scanf("%d",&n);

    while(n)
    {
        sum = sum + pow(2,i) * (n%10);
        n=n/10;
    }

    printf("Decimal value %d\n",sum);
    
    return 0;
}
