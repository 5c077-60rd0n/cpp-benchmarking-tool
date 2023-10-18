#include "tasks.h"
#include <algorithm>
#include <vector>

void sampleTask()
{
    std::vector<int> v(1000);
    std::generate(v.begin(), v.end(), std::rand);
    std::sort(v.begin(), v.end());
}

using Matrix = std::vector<std::vector<int>>;

Matrix createRandomMatrix(int size)
{
    Matrix matrix(size, std::vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = std::rand() % 100; // 0-99
        }
    }
    return matrix;
}

Matrix multiplyMatrices(const Matrix &a, const Matrix &b)
{
    int size = a.size();
    Matrix result(size, std::vector<int>(size, 0));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

void matrixMultiplicationTask(int size)
{
    Matrix a = createRandomMatrix(size);
    Matrix b = createRandomMatrix(size);
    Matrix c = multiplyMatrices(a, b);
}