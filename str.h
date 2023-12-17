#include <stdio.h>

/*
@brief Подсчитывает длину строки str_
@param str_: строка
@return длина строки
*/
unsigned int my_strlen(const char* str_);

/*
@brief Копирует строку src_ в строку dst_, с удалением всех элементов лежащих в строке dst_
@param dst_: конечная строка
@param src_: исходная строка
@return конечная строка в которую скопировали исходную
*/
char* my_strcpy(char* dst_, const char* src_);

/*
@brief Приписывает одну строку в другую
@param dst_: конечная строка
@param src_: исходная строка
@return конечная строка в которую приписали исходную
*/
char* my_strcat(char* dst_, const char* src_);

/*
@brief Сравнивает строки
@param str1_: Первая строка
@param str2_: Втрорая строка
@return 0 если str1_ = str2_, положительное число если str1_ > str2_, отрицательное число если str1_ < str2_
*/
int my_strcmp(const char* str1_, const char* str2_);

/*
@brief Ищет подстроку str2_ в строке str1_
@param str1_: Строка для поиска
@param str2_: Искомая строка
@return указатель на первое вхождение искомой строки в строке
*/
char* my_strstr(const char* str1_, const char* str2_);

/*
@brief Читает что написано в файле
@param file_: файл
@return Прочитанный текст записанный в строку
*/
char* fgetline(FILE* file_);