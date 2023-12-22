/*
@brief Выделяет память под матрицу
@param rows: строки
@param cols: столбцы
@return матрица
*/
double** createMemoryMatrix(int rows, int cols);

/*
@brief Выводит матрицу
@param matrix: матрица
@param size: размер
*/
void printMatrix(double** matrix, int size);

/* 
@brief Освобождает память, выделенную для матрицы
@param matrix: матрица
@param size: размер
*/
void freeMatrix(double** matrix, int size);

/*
@brief Создаёт единичную матрицу того же размера
@param size: размер
@return единичная матрица
*/
double** createIdentity(int size);

/*
@brief Копирует исходную матрицу
@param matrix: матрица
@param size: размер
@return скопированная матрица
*/
double** copyMatrix(double** matrix, int size);

/*
@brief Приводит матрицу к верхнетреугольному виду
@param matrix: матрица
@param size: размер
@param identity: едничная матрица
*/
void TriangularForm(double** matrix, int size, double** identity);

/*
@brief Обратный ход метода Гаусса
@param matrix: матрица
@param size: размер
@param identity: едничная матрица
*/
void ReverseMethod(double** matrix, int size, double** identity);

/*
@brief Вычисляет обратную матрицу
@param matrix: матрица
@param size: размер
@return обратная матрица
*/
double** inverseMatrix(double** matrix, int size);

/*
@brief Выводит обратную матрицу
*/
int printInverseMatrix();

/* 
@brief Вычисляет определитель матрицы
@param matrix: матрица
@param size: размер
@return определитель матрицы
*/
double determinant(double** matrix, int size);

/*
@brief Решает систему линейных уравнений методом Крамера
@param coefficients: коэфициенты
@param constants: константы
@param size: размер
*/
void solveSystem(double** coefficients, double* constants, int size);

/*
@brief Выводит решение системы линейных уравнений
*/
int printSolveSystem();