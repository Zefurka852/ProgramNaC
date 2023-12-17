/*
@brief ������ ������ ������ � ������ �� ���������� �� ������� �����������
@param str_: ������
*/
void shift_characters(char* str_);

/*
@brief ������� ���������� � ������ �������
@param cars: ��������� � ������� � �������
@param size: ������
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