// Number guess game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess,random;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of guess number.");
    random=rand() % 100+1;

    do{
        printf("Please enter your guess beteen(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess<random)
        {
            printf("Guess a larger number.\n");
        }
        else if(guess>random)
        {
            printf("Guess a smaller number.\n");
        }
        else
        {
            printf("Congratulations!!!,You have successfully guessed the number in %d attempts.\n",no_of_guess);
        }

    }while(guess!=random);

    printf("Bye,Bye! Thanks for playing game.\n");
    printf("Developed by: Sulegaon Henil.");

}