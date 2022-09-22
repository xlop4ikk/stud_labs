//Лабораторная работа №1 (1 вариант)
//Задание №3
//Дано натуральное число, определить, является ли оно перевёртышем

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    printf("Запишите 4-х значное число:\n");
    scanf("%i", &a);
    b = a;
    c = 0;
    for (d = 1; d <= 4; d++)
    {
        c = c * 10 + b % 10;
        b = b / 10;
    }
    if (c == a) {
        printf("Да!\n");
    }
    else {
        printf("Нет!\n");
    }
    return 0;
}
