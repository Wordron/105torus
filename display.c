/*
** EPITECH PROJECT, 2023
** display.c
** File description:
** display
*/
#include <stdlib.h>
#include <stdio.h>
#include "torus.h"

int reduce(int n, double x)
{
    for (int i = 0; i < n; i++)
        x = (x * pow(10, 1)) - ((int) (x * pow(10, 1)));
    return (x * pow(10, 5));
}

void display(int n, double x)
{
    int test = reduce(n, x);

    if (test % ((int) pow(10, n + 5)) == 0)
        printf("x = %.*g\n", n, x);
    else
        printf("x = %.*f\n", n, x);
}
