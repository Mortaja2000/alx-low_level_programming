#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	fprintf(stderr, "size of a char: %u byte(s)\n", sizeof(char));
	fprintf(stderr, "size of an int: %u byte(s)\n", sizeof(int));
	fprintf(stderr, "size of a long int: %u byte(s)\n", sizeof(long int));
	fprintf(stderr, "size of a long long int: %u byte(s)\n", sizeof(long long int));
	fprintf(stderr, "size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
