#include <stdio.h>
#include <stdlib.h>

int cash = 5000;

void display_bars(int num1,int num2,int num3)
{
    printf("\n\t\t-----------\n");
    printf("\n");
    printf("\t\t| %d  %d  %d |\n",num1,num2,num3);
    printf("\n");
    printf("\t\t-----------\n\n");
}

int cycle()
{
    while(cash > 0)
    {

        printf("\tYour money: %d\n\n",cash);

        printf("Press any key to spin...");
        getchar();

        int num1 = 0,
            num2 = 0,
            num3 = 0;

        num1 = rand() % 8;
        num2 = rand() % 8;
        num3 = rand() % 8;



        display_bars(num1, num2, num3);

        if(num1 == num2 && num2 == num3)
        {
            if(num1 == 7)
            {
                printf("GRATZ!!! YOU WON JACKPOT! YOU ARE TOTALLY WINNER!!!\n");
                cash += 10000000;

                return 0;
            }

            if(num1 == 6)
            {
                printf("Oh no! Yoo lose some money!\n");
                cash -= 500;

                continue;
            }

            printf("Hoorey! You've get some money!\n");
            cash += 1000;

            continue;

        }

        if( num1 == 5 || num1 == 7  )
        {
            printf("Your luck! Got some money\n");
            cash += 100;
        }
    }

    return -1;
}

int
main()
{
    printf("Welcome to JoyCasino 777\n");
    printf("Now you can become a millionare in one night!\n");
    printf("You can't quit out of our casino until you win or lose! (or die :3)\n");

    int result = cycle();

    if(result < 0)
    {
        printf("Good luck next time, looser!!\n");
    }

    printf("Your final money: %d\n",cash);

    return 0;
}
