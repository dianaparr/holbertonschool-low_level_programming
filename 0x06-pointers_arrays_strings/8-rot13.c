#include "holberton.h"

/**
 *rot13 - function encodes a string using rot13
 *@chr: variable pointer
 *Return: Always 0.
 */

char *rot13(char *chr)
{
	int len, k;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (len = 0; chr[len] != '\0'; len++)
	{
		for (k = 0; alph[k] != '\0'; k++)
		{
			if (chr[len] == alph[k])
			{
				chr[len] = enc[k];
				break;
			}
		}
	}
	return (chr);
}
