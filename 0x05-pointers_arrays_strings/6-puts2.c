#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints one char then skips next
 *followed by newline
 *@str: string to be printed
 *Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
		printf("\n");
}

