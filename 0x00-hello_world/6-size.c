#include <stdio.h>
/**
 * main - Point of entry
 *
 * Return: 0, it is always sucessful.
 */
int main(void)
{
int a;
long int b;
long long int c;
char d
float f;

printf("size of a char: %1u byte(s)\n", (unsigned long)sizedof(d));
printf("size of an int: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
