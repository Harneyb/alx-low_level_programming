#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		/*locates a character in a string*/
		if (s[i] == c)
			return (&s[i]);
	}
	/*located a character*/
	return (0);
}

