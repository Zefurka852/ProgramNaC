#include <stdio.h>
#include <string.h>

#include "str.h"
#include "modul2.h"

void shift_characters(char* str) 
{
    size_t length = my_strlen(str);

    for (size_t i = 0; i < length; ++i) 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            str[i] = (char)(str[i] - 1);
        }
    }
}

void print_cars_info(struct Car* cars, int size) 
{
    printf("Машины, произведённые до 2005 года и зарегистрированные в 2005 году:\n");

    for (int i = 0; i < size; ++i) 
    {
        if (cars[i].year_of_manufacture < 2005 && strcmp(cars[i].registration_date, "2005") == 0) {
            printf("Марка: %s\n", cars[i].brand);
            printf("Производитель: %s\n", cars[i].manufacturer);
            printf("Тип: %s\n", cars[i].type);
            printf("Год выпуска: %d\n", cars[i].year_of_manufacture);
            printf("Дата регистрации: %s\n", cars[i].registration_date);
            printf("\n");
        }
    }
}