#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
   * main - Entry point
    *
     * Return: Always 0
      */
int main(void)
{

	char c = 'h';
	char *s = "Hello";
	int len;
	int len2;

	_printf("%s%c\n", "hello", 'p');
	printf("%s%c\n", "hello", 'p');
	_printf("what is good\n");
	printf("what is good\n");
	_printf("My name is %s %%and I like the letters %c and %c\n", "John", 'A', 'b');
	printf("My name is %s %%and I like the letters %c and %c\n", "John", 'A', 'b');
	len = _printf("Let's try to printf a simple sentence. %s, %s, %c, %c, %s, %d, %i\n", "car", "Big house",'t', c, s, -487, 4356);
	len2 = printf("Let's try to printf a simple sentence. %s, %s, %c, %c, %s, %d, %i\n", "car", "Big house",'t', c, s, -487, 4356);
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len, len2);

	return (0);
}
