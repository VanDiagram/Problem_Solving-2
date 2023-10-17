#include <iostream>
#include <vector>

void Input(std::vector<std::vector<int>> &matrix, int n, std::string name)
{
    std::cout << "Enter the element of " << name <<" : " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int element;
            std::cout << name << "[" << i << "][" << j << "]: ";
            std::cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
}

std::vector<std::vector<int>> Sum(std::vector<std::vector<int>> &matrix1, std::vector<std::vector<int>> &matrix2, int n)
{
    std::vector<std::vector<int>> result;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> row;
        for (int j = 0; j < n; j++)
        {
            row.push_back(matrix1[i][j] + matrix2[i][j]);
        }
        result.push_back(row);
    }

    return result;
}

std::vector<std::vector<int>> Production(std::vector<std::vector<int>> &matrix1, std::vector<std::vector<int>> &matrix2, int n)
{
    std::vector<std::vector<int>> result;
    for(int i = 0; i < n; i++)
    {
        std::vector<int> row;
        for(int j = 0; j < n; j++)
        {
            int sum = 0;
            for(int k = 0; k < n; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            row.push_back(sum);
        }
        result.push_back(row);
    }

    return result;
}

void display(std::vector<std::vector<int>> &matrix, int n, std::string name)
{
    std::cout << "The" << name << std::endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cout << "Enter number of element for the n*n matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix1, matrix2;

    Input(matrix1, n, "matrix A");
    Input(matrix2, n, "matrix B");

    std::vector<std::vector<int>> sum = Sum(matrix1, matrix2, n);
    std::vector<std::vector<int>> production = Production(matrix1, matrix2, n);

    display(sum, n, " sum of matrix: ");
    display(production, n, " sum of matrix: ");

    return 0;
}