#include <stdio.h>
int main()
{
    int i, n;

    // A program in C that uses a for loop to print out the multiplication table of a given number entered by the user.

    printf("Enter the number,of which you want the Multiplication Table.\n");

    scanf("%d", &n);

    printf("Your Table of %d is as follows:\n", n);

    for (i = 1; i < 11; i++)
    {

        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
