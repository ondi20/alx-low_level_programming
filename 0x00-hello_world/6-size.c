#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", unsigned long(a));
printf("Size of an int: %lu byte(s)\n", unsigned long (b));
printf("Size of a long int: %lu byte(s)\n", unsigned long(c));
printf("Size of a long long int: %lu byte(s)\n", unsigned long(d));
printf("Size of a float: %lu byte(s)\n", unsigned long (f));
return (0);
}
