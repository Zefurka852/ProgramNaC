/*
@brief �������� ������ ��� �������
@param rows: ������
@param cols: �������
@return �������
*/
double** allocateMemoryForMatrix(int rows, int cols);

/*
@brief ������� �������
@param matrix: �������
@param size: ������
*/
void printMatrix(double** matrix, int size);

/*
@brief ����������� ������, ���������� ��� �������
@param matrix: �������
@param size: ������
*/
void freeMatrix(double** matrix, int size);

/*
@brief ������ ��������� ������� ���� �� �������
@param size: ������
@return ��������� �������
*/
double** createIdentityMatrix(int size);

/*
@brief �������� �������� �������
@param matrix: �������
@param size: ������
@return ������������� �������
*/
double** copyMatrix(double** matrix, int size);

/*
@brief ���� ������� ������� �������
@param matrix: �������
@param size: ������
@return ������� �������
*/
int searchMainElement(double** matrix, int size, int i);

/*
@brief ������ ������ �������
@param matrix: �������
@param size: ������
@param identity: �������� �������
@param maxIndex: ������� �������
*/
void swappingRows(double** matrix, int size, double** identity, int i, int maxIndex);

/*
@brief ����� ������ �� ������� �������
@param matrix: �������
@param size: ������
@param identity: �������� �������
@param i: ����������� �����
*/
void devidingRowOnMainElement(double** matrix, int size, double** identity, int i);

/*
@brief �������� �������� ��� ������� ���������
@param matrix: �������
@param size: ������
@param identity: �������� �������
@param i: ����������� �����
*/
void zeroingElementsUnderMainElement(double** matrix, int size, double** identity, int i);

/*
@brief �������� ������� � ������������ ����
@param matrix: �������
@param size: ������
@param identity: �������� �������
*/
void TriangularForm(double** matrix, int size, double** identity);

/*
@brief �������� ��� ������ ������
@param matrix: �������
@param size: ������
@param identity: �������� �������
*/
void ReverseMethod(double** matrix, int size, double** identity);

/*
@brief ��������� �������� �������
@param matrix: �������
@param size: ������
@return �������� �������
*/
double** inverseMatrix(double** matrix, int size);


/*
@brief ��������� ������������ �������
@param matrix: �������
@param size: ������
@return ������������ �������
*/
double determinant(double** matrix, int size);

/*
@brief ������ ������� �������� ��������� ������� �������
@param coefficients: �����������
@param constants: ���������
@param size: ������
*/
void solveSystem(double** coefficients, double* constants, int size);