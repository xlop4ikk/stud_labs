//Лабораторная работа №4 (1 вариант)
//Задание №1
//Описать структуру с именем student

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
#define MAX_LENGTH_NAME     32
#define NDISCIPLINES         5
#define PROGRESS_TRESHOLD   4.0
 
typedef struct student_tag {
    char name[MAX_LENGTH_NAME];
    int group;
    int marks[NDISCIPLINES];
} student_t;
 
#define NSTUDENTS 10
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int i; //студенты
    int j; //оценки
    float avg; //cредний балл
    student_t tmp;
    student_t students[NSTUDENTS];
    
    // ввод данных
    for (i = 0; i < NSTUDENTS; ++i) {
        printf("Введите фамилию и инициалы: ");
        gets(students[i].name);
        
        printf("Введите номер группы: ");
        if(scanf("%d", &students[i].group) != 1) {
            fprintf(stderr, "data reading error\n");
            return EXIT_FAILURE;
        }
        
        printf("Введите оценки: ");
        for(j = 0; j < NDISCIPLINES; ++j) {
            if(scanf("%d", &students[i].marks[j]) != 1) {
                fprintf(stderr, "data reading error\n");
                return EXIT_FAILURE;
            }
        }
        
        fflush(stdin);
    }
    
    // Сортировка
    for(i = 0; i < NSTUDENTS; ++i) {
        for(j = NSTUDENTS - 1; j >= i; --j) {
            if(students[j].group < students[j-1].group) {
                tmp = students[j];
                students[j] = students[j-1];
                students[j-1] = tmp;
            }
        }
    }
    
    // Вывод с учетом среднего балла
    printf("\nСписок студентов, средний балл у которых выше %f\n", PROGRESS_TRESHOLD);
    for(i = 0; i < NSTUDENTS; ++i) {
        avg = 0;
        for(j = 0; j < NDISCIPLINES; ++j)
            avg += students[i].marks[j];
        
        avg /= NDISCIPLINES;
        
        if(avg > PROGRESS_TRESHOLD) {
            printf("ФИО: %s\nГРУППА: %d\nОЦЕНКИ: ", students[i].name, students[i].group);
            
            for(j = 0; j < NDISCIPLINES; ++j)
                printf("%d, ", students[i].marks[j]);
            printf("\n\n");
        }
    }
}
