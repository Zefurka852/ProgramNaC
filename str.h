#include <stdio.h>

/*
@brief ������������ ����� ������ str_
@param str_: ������
@return ����� ������
*/
unsigned int my_strlen(const char* str_);

/*
@brief �������� ������ src_ � ������ dst_, � ��������� ���� ��������� ������� � ������ dst_
@param dst_: �������� ������
@param src_: �������� ������
@return �������� ������ � ������� ����������� ��������
*/
char* my_strcpy(char* dst_, const char* src_);

/*
@brief ����������� ���� ������ � ������
@param dst_: �������� ������
@param src_: �������� ������
@return �������� ������ � ������� ��������� ��������
*/
char* my_strcat(char* dst_, const char* src_);

/*
@brief ���������� ������
@param str1_: ������ ������
@param str2_: ������� ������
@return 0 ���� str1_ = str2_, ������������� ����� ���� str1_ > str2_, ������������� ����� ���� str1_ < str2_
*/
int my_strcmp(const char* str1_, const char* str2_);

/*
@brief ���� ��������� str2_ � ������ str1_
@param str1_: ������ ��� ������
@param str2_: ������� ������
@return ��������� �� ������ ��������� ������� ������ � ������
*/
char* my_strstr(const char* str1_, const char* str2_);

/*
@brief ������ ��� �������� � �����
@param file_: ����
@return ����������� ����� ���������� � ������
*/
char* fgetline(FILE* file_);