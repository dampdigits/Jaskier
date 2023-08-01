// Program converts a string of digits to the corresponding integer and displays it

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    // prompt for integer input
    string input = get_string("Enter a positive integer: ");
    // check for non-numeric characters in input
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int and display
    printf("%i\n", convert(input));
}

// convert string to int
int convert(string input)
{
    int num = 0;

    // traverse through the string
    for (int i = 0; i < strlen(input); i++)
    {
        // concatenate each digit to the number
        num = (num * 10) + ((int) input[i] - 48);
    }

    return num;
}