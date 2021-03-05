#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int guessno,noguess=1;
    srand(time(0));
    int number = rand()%100+1;
    //printf("Random no: %d\n",number);
    

    do
    {
        printf("guess the no. btw 1 to 100\n");
        scanf("%d",&guessno);
        if(guessno<number)
        {
            printf("guess the higher no.\n");
        }
        else if(guessno>number)
        {
            printf("Guess the lower no.\n");
        }
        else
        {
            printf("You guessed in it %d attempt\n",noguess);
        }

        noguess++;
    } while (guessno!=number);
    
    return 0;
}