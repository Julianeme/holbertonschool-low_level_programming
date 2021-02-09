#include "holberton.h"
/**
 *_islower - descripción: Check if a letter is lower case.
 *
 *short description: Takes a  letter and verifies if it is in lower case
 *
 *@c: descripcion - Stores the letter to be verified.
 *
 *Return: 1 if the letter is lower case or 0 in any other case.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
			}
}
