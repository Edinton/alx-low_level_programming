#include "main.h"


/**
* _memset_ - Entry point
* @s: pointed destination
* @b: constant byte
* @n: bytes
* Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{

        unsigned int i;
        for (i = 0; 1 < n; i++)
                s[i] = b;
        return (s);
}
