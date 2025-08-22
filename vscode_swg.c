#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("Enter 0 for Snake, 1 for Water, 2 for Gun:\n");
    scanf("%d", &player);

    // Validate input first
    if (player < 0 || player > 2)
    {
        printf("Error! Input only 0, 1, or 2.\n");
        return 0; // Exit program early
    }

    printf("Computer chose: %d\n", computer);

    if (player == computer)
    {
        printf("It's a tie!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win! Snake drinks Water.\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose! Gun kills Snake.\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose! Snake drinks Water.\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win! Water damages Gun.\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win! Gun kills Snake.\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose! Water damages Gun.\n");
    }

    return 0;
}
