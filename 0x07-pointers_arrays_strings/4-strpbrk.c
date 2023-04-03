#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			/*searched a sting for set of bytes*/
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
	/*set of bytes*/
}

