/*
** EPITECH PROJECT, 2023
** newton.c
** File description:
** newton
*/
#include <stdlib.h>
#include <stdio.h>
#include "torus.h"

double deriv(char **av, double x)
{
    double result = 0;

    result = (atof(av[3]) + (2 * atof(av[4]) * x) + (3 * atof(av[5]) * pow(x,2)) + (4 * atof(av[6]) * pow(x,3)));
    return (result);
}

int newton(char **av)
{
    int max = 6;
    double x0 = 0.5;

    printf("x = %.*g\n", atoi(av[7]), x0);
    for (int compt = 0; compt != max; compt++) {
        if (compt == max)
            return (84);
        x0 = x0 - (calcul(av, x0) / deriv(av, x0));
        if (x0 != 0.5)
            display(atoi(av[7]), x0);
        if (fabs(calcul(av, x0)) < pow(10, (atoi(av[7]) * (-1))))
            return (0);
        if (deriv(av, x0) == 0)
            return (84);
    }
}