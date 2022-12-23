#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination with space to hold source string
 * @src: source string
 * @n: bytes to be copied
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
