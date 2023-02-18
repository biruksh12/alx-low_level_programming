#include <stdio>
/**
* main - A program that ptints ths size of a varies computer types
* Return: Always 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
