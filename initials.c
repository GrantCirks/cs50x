#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    
    printf(" Enter your full name please: ");
    string s = GetString();
    
    
    for ( int i = 0 , n = strlen(s) ; i < n ; i++)
    {
        if (i == 0)
        {
            printf("the first initial is %c\n", s[i]);
        }
        else if (s[i] == ' ')
        {
            i++;
            printf ("%c\n", s[i]);
        }
        else
        {
            printf ("else condition executed\n");
        }
            
    }
            
        
    return 0;
    
}
