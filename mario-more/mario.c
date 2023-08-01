/*  Program replicates a pyramid from World 1-1 in Nintendo’s Super Mario Brothers.
    It generates a pyramid made of hash '#' in terminal. according to the height entered by user.
*/

#include <cs50.h>
#include <stdio.h>

int get_height(void);


int main(void)
{
    //inputs height of pyramid
    int height = get_height();

    // prints pyramid
    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= (row + height + 2); column++)
        {
            // prints blank space before '#' in each row
            if ((row + column) <= height)
            {
                printf(" ");
            }
            // prints 2 blank spaces in the middle of pyramid in each row
            else if (column == (height + 1) || column == (height + 2))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}










/*  Function prompts user to enter height of pyramid
    If the user doesn't enter a height between 1 and 8, it re-prompts
*/
int get_height(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while ((height < 1) || (height > 8));

    return height;
}
