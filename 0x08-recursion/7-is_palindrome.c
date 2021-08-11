#include "holberton.h"

/**
 *is_palindrome - function define if a string is a palindrome
 *@s: pointer type char
 *Return: palindrome
 */
int is_palindrome(char *s)
{
	return (palindrome_yeah(s, strlen_palindr(s) - 1, 0));
}

/**
 *strlen_palindr - function that evalue length of the string
 *@s: pointer type char
 *Return: length of the string
 */
int strlen_palindr(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strlen_palindr(&s[n + 1]));
	}
	return (0);
}

/**
 *palindrome_yeah - function recursive
 *@s: pointer type char
 *@j: last position of the string
 *@i: first position of the string
 *Return: this string is a palindrome!
 */
int palindrome_yeah(char *s, int j, int i)
{
	if (i > j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	if (s[i] == s[j])
	{
		return (palindrome_yeah(s, (j - 1), (i + 1)));
	}
	else
	{
		return (0);
	}
}
