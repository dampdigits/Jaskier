//Program inputs user name and says hello

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // inputs name
    string name = get_string("What's your name? ");
    // prints hello
    printf("Hello, %s!\n", name);
}