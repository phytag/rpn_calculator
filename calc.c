#include <stdio.h>
#include <stdlib.h>

//Function to process input character

void processCharacter(char ch)
{

}

int main(void)
{
    char ch;

    while(1)
    {
        printf("Enter RPN expression: ");

        while((ch = getchar()) != EOF && ch != '\n')
        {
            processCharacter(ch);
        }
    }
    return 0;
}