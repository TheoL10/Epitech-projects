/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** task01
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
