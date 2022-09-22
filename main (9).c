//Лабораторная работа №2 (1 вариант)
//Задание №1
/* Дан массив действительных чисел а размерности n (вводится с клавиатуры). Сформировать массив b, каждый
элемент которого bi - среднее арифметическое элементов массива а, исключая ai */


#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int massiv1[n];
    int massiv2[n];
    printf("Введите n: ");
    scanf("%d", &n);

    
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        massiv1[i] = n;
        sum += massiv1[i];
    }
    printf("Среднее арифметическое: %d\n", sum / n);
    
    printf("Исходный массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", massiv1[i]);
    }
    printf("Новый массив: \n");
    for (int i = 0; i < n; i++) {
        massiv2[i] = sum / n;
        printf("%d\n", massiv2[i]);
    }
}
