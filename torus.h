/*
** EPITECH PROJECT, 2023
** torus.h
** File description:
** torus
*/
#include <math.h>

#ifndef TORUS_H_
    #define TORUS_H_

    enum array {A_ZERO, A_ONE, A_TWO, A_THREE, A_FOUR};

    double calcul(char **av, double x);
    int secante(char **av);
    int newton(char **av);
    int bisection(char **av);
    void display(int n, double x);

#endif /* !TORUS_H_ */
