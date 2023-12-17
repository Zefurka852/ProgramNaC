#include <stdio.h>

#include "functions.h"
#include "DopZadaniya.h"


int euler_function(int value_) {
    int result = 1; // Изначально считаем, что все числа от 1 до n-1 взаимно просты с n

    for (int i = 2; i < value_; ++i) {
        if (gcd(i, value_) == 1) {
            // Если i и n взаимно просты, увеличиваем результат
            ++result;
        }
    }

    return result;
}

#include <stdio.h>
#include <math.h>

double exp_taylor(double x, int precision) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i < precision; ++i) {
        term = term * x / i;
        result += term;
    }

    return result;
}
