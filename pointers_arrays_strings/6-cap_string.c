
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int start_of_word = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			start_of_word = 1;
		}
		else
		{
			if (start_of_word && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			start_of_word = 0;
		}
		i++;
	}

	return (s);
}
