//Лабораторная работа №1 (1 вариант)
//Задание №1
//Даны x, y, z. Вычислить a, b

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, a, b; //float = n.nn
    
    printf("Введите ваши числа:\n");
    scanf("%f%f%f%f%f", &x, &y, &z, &a, &b);
    
    a = (3 + exp(y - 1)) / (1 + pow(x, 2) * fabs(y - tan(z)));
    b = (1 + fabs(y - x) + ((pow(y - x, 2)) / 2) + ((fabs(pow(y - x, 3)) / 3)));
    
    printf("%.2f\n", a);
    printf("%.2f\n", b);
    
    if ((1 + pow(x, 2) * fabs(y - tan(z))) == 0)
        {
        printf("Невозможно вычислить значение\n");
        return 0;
    }
}
