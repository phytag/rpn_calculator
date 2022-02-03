#include <stdio.h>
#include <stdlib.h>

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