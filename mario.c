//CS50X PSET1: Itsa Mario
//Prints Mario's half pyramid using # by accepting & validating user input 1-23

#include <stdio.h>
#include <cs50.h>


int main (void)
{
    //Declare Variables
    
    int height, hashes, spaces, row_ctr, num_spaces;
    
    // Get & Validate input from user for height of half-pyramid.
    // Checking for positive integer using CS50 Library GetInt()
    // Using a do-while loop, with two relational components to check that...
    //... user input is between 1-23. 
    //CS50 staff implementation simply prompts user for Height. However, my prompt...
    //uses printf to give more detail to user, and re-prompts with same ask.
    
    do
    {
   
        printf("Input a height for Mario's half-pyramid. (Please enter a positive integer no greater than 23)\n");
        height = GetInt();
    }
   
    while (height < 1 || height > 23);
    
    printf("Height: %i\n", height);
    
    //Nested loops print half pyramid
    // First "for" statement is for the rows
    
    for (row_ctr = 0; row_ctr < height; row_ctr++)
    {
        hashes = -1;
        spaces = 1;
        num_spaces = height - row_ctr;
            
            // Second "for" statement prints the spaces in each row.
            //Basic Algorithm is user input (stored as variable height) minus the row, equals number of spaces needed
            
            for (spaces = 1; spaces < num_spaces; spaces++)
                printf(" ");
                
                    // Using a do loop to print hashes so that the statement is executed before the test expression is evaluated
                    
                    do
                    {
                        printf ("#");
                        hashes++;
                    }
                    while (hashes <= row_ctr);
            
        printf("\n");
    }
    return 0;
}
