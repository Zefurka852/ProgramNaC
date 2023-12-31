/*
@brief Функция Эйлера, которая выводит количеству натуральных чисел, меньших либо равных value_ и взаимно простых с ним
@param value_: Число у которого мы ищем колличество меньших либо равных ему и взаимно простых с ним
@return Количество натуральных чисел, меньших либо равных value_ и взаимно простых с ним
*/
int euler_function(int value_);

/*
@brief Функция, рассчитывающая ряд Тейлора для функции экспоненты с заданной точностью
@param x: Значение для экспоненты
@param precision: Количество членов ряда Тейлора
@return Результат ряда тейлора для функции экспоненты с заданной точностью
*/
double exp_taylor(double x, int precision);