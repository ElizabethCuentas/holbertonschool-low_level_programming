#include "holberton.h"
/**
* _isalpha - Entry point
* @c: ASCII
* Return: 0
*/
int _isalpha(int c)
{
if (c > 64 && c < 132)
{
	return (1);
}
else
{
	return (0);
}

}
