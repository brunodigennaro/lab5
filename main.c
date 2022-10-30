/*  Bruno DiGennaro
    September 28, 2022
    CPSC 1111 001
    This program prints a multiplication table to the screen
*/

#include <stdio.h>

int main(void) {

    // variables
    int input, i, j;

    // prompt user and get input
    fprintf(stdout, "Enter an integer to display the multiplication table from 1 to N:  ");
    fscanf(stdin, "%d", &input);

    // outer 'for' loop for row number until 'input'
    for (i = 0; i <= input; i++)
    {
        // inner 'for' loop for column number until 'input'
        for (j = 0; j <= input; j++)    
        {
            // puts 'X' in the top left corner of the table
            if (i == 0 && j == 0)
            {
                printf("%4c", 'X');
            }

            // prints the first row of numbers
            else if (i == 0)
            {
                printf("%4d", j);
            }

            // prints the first column of numbers
            else if (j == 0)
            {
                printf("%4d", i);
            }

            // main condition
            else
            {
                // multiplies rows and columns to create table
                printf("%4d", i * j);
            }
        }

        // prints a new line after every row
        printf("\n");
    }

    return 0;
}