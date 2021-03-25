#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int i,l,ch;
    char str[] = "123456789";

   // l = strlen(str);
   for(l=0;str[l];l++);
    printf("%d\n",l);

    for ( i = 0; i < l/2; i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
        
    }
    printf("Reverse string: %s",str);


    return 0;
}
