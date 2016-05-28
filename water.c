//cs50 Pset1: water
// Program that gets length of shower from user and then outputs the number of water bottles used

#include <stdio.h>

int main()
{
    int bot;
    int min;

    do 
    {
        printf("How long was your shower? (Please answer in minutes)\n");
        min = GetInt();
    }
    while (min < 0);
    
        bot = min * 12;
        printf("minutes: %d\n", min);
        printf("bottles: %d\n", bot);

    return 0; 
}
