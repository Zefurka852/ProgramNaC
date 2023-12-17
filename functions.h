#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*
@brief ��������� ����� x �� ��������
@param x �����, ������� �� ���������
@return 1 - ���� ������� �����, 0 - ���� ������� �������
*/
long long int Prime(unsigned long long int x);

/*
@brief ������� �������� ����� �� ���������
@param x �����, ������� �� ���������
@return 1 - ���� ������� �����, 0 - ���� ������� �������
*/
int isPalindrome(int x);

/*
@brief ������� ��� ���������� ����������� ������ ��������
@param a, b - �����, ��� ����� �������� �� ����
@return ���������� ����� ��������
*/
long long gcd(long long a, long long b);

/*
@brief ������� ��� ���������� ����������� ������ ��������
@param a, b - �����, ��� ����� ������� �� ����
@return ���������� ����� �������
*/
long long lcm(long long a, long long b);

/*
@brief ������� ��� �������� ���������� ����� �� from_(������������) �� to_(��������������)
@param from_: �� ����� �����
@param to_: �� �����
@return ��������� �����
*/
int generate_random_number(int from_, int to_);

/*
@brief ������� ��� �������� ����� � �����
@param secret_number: ���������� �����
@param guess: ����� ������� ������ �����
@param bulls: ����
@param cows: ������
*/
void count_bulls_and_cows(int secret_number, int guess, int* bulls, int* cows);
#endif