#ifndef _FUNCTION_H_
#define _FUNCTION_H_

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

/*
@brief Функция для создания рандомного числа от from_(включительно) до to_(невключительно)
@param from_: От этого числа
@param to_: До этого
@return рандомное число
*/
int generate_random_number(int from_, int to_);

/*
@brief Функция для подсчёта быков и коров
@param secret_number: Загаданное число
@param guess: Число которое вводит игрок
@param bulls: Быки
@param cows: Коровы
*/
void count_bulls_and_cows(int secret_number, int guess, int* bulls, int* cows);
#endif