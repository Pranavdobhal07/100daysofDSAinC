#include <stdio.h>

int main()
 {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    printf("\nSpiral Traversal: ");

    while (top <= bottom && left <= right) 
    {
        for (int j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            right--;

        if (top <= bottom) 
        {
            for (int j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    printf("\n");
    return 0;
}