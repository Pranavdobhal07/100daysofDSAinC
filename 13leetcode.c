#include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {

    int m = matrixSize;
    int n = matrixColSize[0];

    int total = m * n;
    int* result = (int*)malloc(sizeof(int) * total);
    *returnSize = total;

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int k = 0;

    while (top <= bottom && left <= right) 
    {

        for (int j = left; j <= right; j++)
            result[k++] = matrix[top][j];
        top++;

        for (int i = top; i <= bottom; i++)
            result[k++] = matrix[i][right];
        right--;

        if (top <= bottom)
         {
            for (int j = right; j >= left; j--)
                result[k++] = matrix[bottom][j];
            bottom--;
        }
        if (left <= right)
         {
            for (int i = bottom; i >= top; i--)
                result[k++] = matrix[i][left];
            left++;
        }
    }

    return result;
}