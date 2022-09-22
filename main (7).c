//Лабораторная работа №1 (1 вариант)
//Задание №5
//Дано натуральное число n. Вычислить выражение

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i;
    float res = 1.00;
    int kvadrat = 2;
    printf("Введите число n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        res = res*(1 + 1/(pow(i,kvadrat)));
    }
    printf("Результат равен: %.2f\n", res);
    return 0;
}
