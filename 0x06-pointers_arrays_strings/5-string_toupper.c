#include "main.h"

/**
* string_toupper -> function to change string letters from upper to lowercase
*  @str: parameter
*
* Return: str
*/
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')

			str[index] -= 32;

		index++;
	}
	return (str);
}
