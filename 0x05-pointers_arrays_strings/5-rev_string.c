#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: always reversing
 *
 * Return: Alaways Zero
 */

void rev_string(char *s)
{
	int rev = strlen(s);

	while (rev--)
		putchar(rev);
}
