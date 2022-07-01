#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t = time(NULL);
    int random_choice, user_choice, stop = 1, wins = 0, losses = 0;
    srand(t);
    while (stop)
    {
        printf("choices:\n0.Rock\n1.Paper\n2.Scissors\n");
        printf("Enter your choice\n");
        scanf("%d", &user_choice);
        switch (user_choice)
        {
        case 0:
            // Rock
            printf("You choose Rock\n");
            break;
        case 1:
            // paper
            printf("You choose Paper\n");

            break;
        case 2:
            // scissors
            printf("You choose Scissor\n");
            break;
        default:
            printf("Invalid input and exiting program.\n");
            stop = 0;
            continue;
            break;
        }

        random_choice = rand() % 3;
        if (random_choice == 0)
        {
            printf("Results:Rock\n");
        }
        else if (random_choice == 1)
        {
            printf("Results:Paper\n");
        }
        else if (random_choice == 2)
        {
            printf("Results:scissor\n");
        }


        if (random_choice == user_choice)
        {
            printf("Draw\n");
        }
        else if (random_choice == 0 && user_choice == 1)
        {
            printf("You win\n");
            wins++;
        }
        else if (random_choice == 0 && user_choice == 2)
        {
            printf("You loss\n");
            losses++;
        }
        else if (random_choice == 1 && user_choice == 2)
        {
            printf("You win\n");
            wins++;
        }
        else if (random_choice == 1 && user_choice == 0)
        {
            printf("You loss\n");
            losses++;
        }
        else if (random_choice == 2 && user_choice == 0)
        {
            printf("You win\n");
            wins++;
        }
        else if (random_choice == 2 && user_choice == 1)
        {
            printf("You loss\n");
            losses++;
        }
        printf("Wins:%d,Losses:%d\n", wins, losses);
    }
}