#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter 1 for rock\nEnter 2 for paper\nEnter 3 for scissor\nEnter 0 to exit\n");
    printf("Player with more wins win the game\n");

    int count1 = 0, count2 = 0;
    int i=1;
    while(1)//for (int i = 1; i < 4; i++)
    {
        int n, comp;
        printf("Game %d:\n", i++);
        printf("Your Turn: ");
        scanf("%d", &n);
        srand(time(NULL));
        comp = (rand() % 3)+1;
        printf("Computer's Turn: %d\n", comp);
        if(n==0)
        {
            printf("The game ends\n\n");
            goto end;
        }
        else if(n<0 || n>3)
        {
            printf("Invalid input\n\n");
            continue;
        }
        else if (n == comp)
        {
            printf("Tie\n\n");
            continue;
        }
        else if ((n == 1 && comp == 3) || (n == 2 && comp == 1) || (n == 3 && comp == 2))
        {
            printf("You Win\n\n");
            count1++;
        }
        else
        {
            printf("Computer Wins\n\n");
            count2++;
        }
    }

    printf("\n\n");
    end:
    printf("%s's score = %d\nComputer's score = %d\n\n", name, count1, count2);
    if (count1 == count2)
    {
        printf(" The Game Tied");
    }
    else if (count1 > count2)
    {
        printf("The Winner of the game is %s", name);
    }
    else
    {
        printf("The Winner of the game is Computer");
    }

    return 0;
}
