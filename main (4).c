//Лабораторная работа №1 (1 вариант)
//Задание №2
//Дано действительное число a. Вычислить f(a)

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double a, f; //a = n.nn
    printf("Введите a:\n");
    scanf("%lf", &a);
    
    if (a <= 0) {
        f = 0;
    }
    else if (a > 0 && a <= 1) {
        f = a * a - a;
    }
    else {
        f = a * a - sin(M_PI * a * a);
    }

    printf("f(a) = %.2lf\n", f);
    return 0;
}
