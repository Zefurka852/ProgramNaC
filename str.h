#include <stdio.h>

unsigned int fgetline(char* line_, FILE* file_);

/*
@brief Находит длину строки
@param str_: строка
@return Количество символов
*/
unsigned int my_strlen(const char* str_);

/*
@brief Копирует одну строку в другую
@param dst_: Конечная строка
@param src_: Начальная строка
@return скопируемую строку
*/
char* my_strcpy(char* dst_, const char* src_);

/*
@brief Дополняет строку
@param dst_: Конечная строка
@param src_: Начальная строка
@return Дополненную строку
*/
char* my_strcat(char* dst_, const char* src_);

/*
@brief Сравнивает строки
@param str1_: Первая строка
@param str2_: Вторая строка
@return 0 если str1_ = str2_, числа больше 0 если str1_ > str2_, числа меньше 0 если str1_ < str2_
*/
int my_strcmp(const char* str1_, const char* str2_);

/*
@brief Ищет указатель на первое вхождение искомой строки в строке
@param str1_: Строка в которой ищем
@param str2_: Искомая строка
@return Указатель
*/
int my_strstr(const char* str1_, const char* str2_);