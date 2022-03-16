#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 
 */
int _isalpha(int l)
{
	if (((l >= 'a') && (l <= 'z')) || ((l >= 'A') && (l <= 'Z')))
		return (1);
	else
		return (0);
}
