#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns single digit from 0-10
 */

int main(void)
{
	int num = '0';

	while(num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
