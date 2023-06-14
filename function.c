/*
** EPITECH PROJECT, 2023
** function.c
** File description:
** function
*/
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double calcul(char **av, double x)
{
    double result = 0;

    result = (atof(av[2]) + (atof(av[3]) * x) + (atof(av[4]) * pow(x, 2)) + (atof(av[5]) * pow(x, 3)) + (atof(av[6]) * pow(x,4)));
    return (result);
}