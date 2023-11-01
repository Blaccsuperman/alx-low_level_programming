#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two entered strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL for fail; concat string for success
 */
char *str_concat(char *s1, char *s2)
{
        char *new_str;
        int i = 0;
        int c = 0;
        int len = 0;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i] || s2[i]; i++)
                len++;

        new_str = malloc(len * sizeof(char));
        if (new_str == NULL)
                return (NULL);

        for (i = 0; s1[i]; i++)
        {
                new_str[c++] = s1[i];
        }

        for (i = 0; s2[i]; i++)
                new_str[c++] = s2[i];

        return (new_str);
}

