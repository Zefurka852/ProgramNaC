#ifndef  _FUNCTION_H_
#define _FUCTION_H_

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
#endif