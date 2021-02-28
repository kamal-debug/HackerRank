#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int arr[5],min,max,i,sum=0;

    for ( i = 0; i < 5; i++)
    {
        scanf("%ld",&arr[i]);
        sum = sum + arr[i];
    }
    min=arr[0];
    for ( i = 1; i < 5; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }

    }
    max=arr[0];
    for ( i = 1; i < 5; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

    }
    printf("%ld %ld\n",sum-max,sum-min);
    return 0;
}
