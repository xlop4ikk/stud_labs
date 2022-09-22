//Лабораторная работа №1 (1 вариант)
//Задание №6
//Вычислить бесконечную сумму с заданной точностью

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double eps = 0.000001;
    double t = 1.0;
    double sum;
    
    i = 0;
    sum = 0;
    
    while (t > eps) {
        i++;
        t = 1.0/(pow(i,2));
        sum = sum + t;
    }
    printf("sum = %lf\n", sum);
}
