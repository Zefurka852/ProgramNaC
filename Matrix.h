/*
@brief Выделяет память под матрицу
@param rows: строки
@param cols: столбцы
@return матрица
*/
double** allocateMemoryForMatrix(int rows, int cols);

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
double** createIdentityMatrix(int size);

/*
@brief Копирует исходную матрицу
@param matrix: матрица
@param size: размер
@return скопированная матрица
*/
double** copyMatrix(double** matrix, int size);

/*
@brief Ищет главный элемент матрицы
@param matrix: матрица
@param size: размер
@return главный элемент
*/
int searchMainElement(double** matrix, int size, int i);

/*
@brief Меняет строки местами
@param matrix: матрица
@param size: размер
@param identity: едничная матрица
@param maxIndex: главный элемент
*/
void swappingRows(double** matrix, int size, double** identity, int i, int maxIndex);

/*
@brief Делит строки на главный элемент
@param matrix: матрица
@param size: размер
@param identity: едничная матрица
@param i: колличество строк
*/
void devidingRowOnMainElement(double** matrix, int size, double** identity, int i);

/*
@brief Обнуляет элементы под главным элементом
@param matrix: матрица
@param size: размер
@param identity: едничная матрица
@param i: колличество строк
*/
void zeroingElementsUnderMainElement(double** matrix, int size, double** identity, int i);

/*
@brief Приводит матрицу к ступенчатому виду
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