#include <stdio.h>
#include <cs50.h>

// main method
int main(void)
{
    int height;                                 // height of the tower
    // keep asking for height until the user enters number between 1 and 8 inclusive
    do
    {
        height = get_int("Height: ");           // get input from the user
    }
    while (height < 1 || height > 8);

    //to move through each row
    for (int row = 0; row < height; row++)
    {
        // counter to keep track of iterations to add spaces
        int counter = 0;
        while (counter < height - (row + 1))
        {
            printf(" ");                        // print a space according to line
            counter++;
        }
        //to add the # symbol after spaces
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");                           // print a new line
    }
}