#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the type of various things.
 * It can be runned in the syetem.
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of  float: %d byte(s)\n", (int) sizeof(float));

	return (0);

}
