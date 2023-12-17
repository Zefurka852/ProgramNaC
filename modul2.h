/*
@brief Меняет каждый символ в строке на предыдущий из таблицы кодирования
@param str_: строка
*/
void shift_characters(char* str_);

/*
@brief Выводит информацию о нужных машинах
@param cars: структура с данными о машинах
@param size: размер
*/
void print_cars_info(struct Car* cars, int size);

struct Car 
{
    char brand[50];
    char manufacturer[50];
    char type[50];
    int year_of_manufacture;
    char registration_date[20];
};