#include "holberton.h"

/**
 *leet - encodes a string into 1337
 *@chr: variable pointer
 *Return: Always 0.
 */

char *leet(char *chr)
{
	int len, k;
	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char nmb[] = "43071";

	for (len = 0; chr[len] != '\0'; len++)
	{
		for (k = 0; low[k] && upp[k] != '\0'; k++)
		{
			if (chr[len] == low[k] || chr[len] == upp[k])
			{
				chr[len] = nmb[k];
			}
		}
	}
	return (chr);
}
