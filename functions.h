#ifndef  _FUNCTION_H_
#define _FUCTION_H_

/*
@brief Проверяет число x на простоту
@param x Число, которое мы проверяем
@return 1 - если функция верна, 0 - если функция неверна
*/
long long int Prime(unsigned long long int x);

/*
@brief Функция проверки числа на палнидром
@param x Число, которое мы проверяем
@return 1 - если функция верна, 0 - если функция неверна
*/
int isPalindrome(int x);

/*
@brief Функция для вычисления наибольшего общего делителя
@param a, b - числа, чей общий делитель мы ищем
@return наибольший общий делитель
*/
long long gcd(long long a, long long b);

/*
@brief Функция для вычисления наименьшего общего кратного
@param a, b - числа, чьё общее кратное мы ищем
@return наименьшее общее кратное
*/
long long lcm(long long a, long long b);
#endif