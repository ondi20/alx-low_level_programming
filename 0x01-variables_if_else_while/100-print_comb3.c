#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main()
{
    int i, j;

    for (i = 0; i <= 8; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar(i + '0');
            putchar(j + '0');
            putchar(',');
            putchar(' ');
        }
    }

   // putchar('\n');

    return 0;
}
