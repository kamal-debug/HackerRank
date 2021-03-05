#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};

    int i,j,k,temp;

    for(i=0,j=9;i<10,j>0;i++,j--)
    {
        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
    printf("Reversed Array is:");

    for ( k = 0; k < 10; k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");


    return 0;
}
