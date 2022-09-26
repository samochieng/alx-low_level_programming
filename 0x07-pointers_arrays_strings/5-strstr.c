#include "main.h"

/**
* _strstr -> function to locate a substring
* @haystack: parameter for target string
* @needle: parameter for substring
*
* Return: pointer to the beginning of substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			}
			while (haystack[index] == needle[index])
		}
		haystack++;
	}
	return (0);
}

