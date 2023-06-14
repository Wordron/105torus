/*
** EPITECH PROJECT, 2023
** secante.c
** File description:
** secante
*/
#include <stdlib.h>
#include <stdio.h>
#include "torus.h"

int secante(char **av)
{
    double test = 0;
    double x_o = 0;
    double x_one = 1;
    double x_two = 0;
    int n = atoi(av[7]);

    if (fabs(calcul(av, 0)) < pow(10, n * (-1))) {
        display(n, x_o);
        return (0);
    }
    if (fabs(calcul(av, 1)) < pow(10, n * (-1))) {
        display(n, x_one);
        return (0);
    }
    for (int i = 0; i < 8; i++) {
        x_two = x_one - ((calcul(av, x_one) / (calcul(av, x_one) - calcul(av, x_o))) * (x_one - x_o));
        display(n, x_two);
        if (fabs(calcul(av, x_two)) < pow(10, n * (-1)))
            return (0);
        x_o = x_one;
        x_one = x_two;
    }
    return (84);
}
