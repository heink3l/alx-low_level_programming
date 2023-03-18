#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter;

        letter = 'a';
        while (letter != '{')
        {
                putchar (letter);
                letter++;
        }
        putchar('\n');
        return (0);
}


