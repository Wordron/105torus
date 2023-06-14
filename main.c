/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/
#include <stdlib.h>
#include <stdio.h>
#include "torus.h"

int my_str_isfloat(char const *str)
{
    int i = 1;

    while (str[i] != '\0') {
        if (str[i] <= '9' && str[i] >= '0' || str[i] == '.')
            i++;
        else
            return (0);
    }
    if (str[0] == '-')
        return (1);
    if (str[0] <= '9' && str[0] >= '0')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int result = 0;

    if (ac != 8)
        return (84);
    if (atof(av[1]) != 1 && atof(av[1]) != 2 && atof(av[1]) != 3)
        return (84);
    for (int i = 1; i != ac; i++) {
        if (my_str_isfloat(av[i]) != 1)
            return(84);
    }
    if (atof(av[7]) < 0)
        return (84);
    if (atoi(av[1]) == 1) {
        result = bisection(av);
        return (result);
    } else if (atoi(av[1]) == 2) {
        result = newton(av);
        return (result);
    } else if (atoi(av[1]) == 3) {
        result = secante(av);
        return (result);
    }
}