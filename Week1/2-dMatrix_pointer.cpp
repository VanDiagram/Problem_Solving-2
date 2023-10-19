#include <iostream>

//Make a function pointer to return a pointer 2D-matrix
int **allocateMatrix(int n)
{
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }
    return matrix;
}

//Make a prototype to ask 2D-matrix elements
void inputMatrix(int **matrix, int n, std::string name)
{
    std::cout << "Enter element of matrix " << name << ": " << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

//Make a printing prototype to print the result
void printMatrix(int **matrix, int n, std::string name)
{
    std::cout << name << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//Make a prototype to delete 2D matrix
void deallocateMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
}

//Prototype summation of 2D matrix
void sum(int **matrix1, int **matrix2, int **result, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] =  matrix1[i][j] + matrix2[i][j];
        }
    }
}

//Prototype production of 2D matrix
void production(int **matrix1, int **matrix2, int **result, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    int n;
    std::cout << "Enter number of element: ";
    std::cin >> n;

    int **matrix1 = allocateMatrix(n);
    int **matrix2 = allocateMatrix(n);
    int **Summation = allocateMatrix(n);
    int **Production = allocateMatrix(n);

    inputMatrix(matrix1, n, "A");
    inputMatrix(matrix2, n, "B");

    sum(matrix1, matrix2, Summation, n);
    production(matrix1, matrix2, Production, n);

    printMatrix(Summation, n, "The sum of A and B: ");
    printMatrix(Production, n, "The production of A and B: ");

    //! Delete memory
    deallocateMatrix(matrix1, n);
    deallocateMatrix(matrix2, n);
    deallocateMatrix(Summation, n);
    deallocateMatrix(Production, n);

    return 0;
}