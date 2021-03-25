#include<stdio.h>

int btod(char s[]);

int main(int argc, char const *argv[])
{
    printf("%d",btod("1011010"));
    return 0;
}

int btod(char s[])
{
    int i,d=0;
    for ( i = 0; s[i]!='\0'; i++)
    {
       if(s[i]=='0'){
           d=d*2+0;
       }
       else
       {
           d=d*2+1;
       }
    }
       return d;
    
}
