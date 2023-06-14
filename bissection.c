/*
** EPITECH PROJECT, 2023
** bissection.c
** File description:
** bissection
*/
#include "torus.h"
#include <stdlib.h>
#include <stdio.h>

int bisection(char **av)
{
    double test = 0;
    double x_o = 0;
    double x_m = 0;
    double x_one = 1;
    int n = atoi(av[7]);
    double a[5] = {atof(av[2]), atof(av[3]), atof(av[4]), atof(av[5]), atof(av[6])};

    if (fabs(calcul(av, 0)) < pow(10, n * (-1))) {
        display(n, x_o);
        return (0);
    }
    if (fabs(calcul(av, 1)) < pow(10, n * (-1))) {
        display(n, x_one);
        return (0);
    }
    for (int i = 0; i < 50; i++) {
        x_m = (x_o + x_one) / 2;
        test = calcul(av, x_o) * calcul(av, x_m);
        display(n, x_m);
        if (fabs(calcul(av, x_m)) < pow(10, n * (-1)))
            return (0);
        if (test < 0)
            x_one = x_m;
        if (test > 0)
            x_o = x_m;
    }
    return (84);
}
