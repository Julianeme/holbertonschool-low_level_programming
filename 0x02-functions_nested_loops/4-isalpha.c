#include "holberton.h"

/**
 *_isalpha - descripción: Check if a letter is alphabetic characters.
 *
 *short description: Takes a  letter and verifies if it is an
 * alphabetic character.
 *
 *@c: descripcion - Stores the letter to be verified.
 *
 *Return: 1 if the letter is alpha case or 0 in any other case.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
			}
}
