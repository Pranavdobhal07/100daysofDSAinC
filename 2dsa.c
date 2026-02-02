#include <stdio.h>

int main() 
{
    int n, pos, i;
    int arr[n]; 

    if (scanf("%d", &n) != 1) return 1;

   
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    if (scanf("%d", &pos) != 1) return 1;

    
    if (pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
    } else 
    {
        for (i = pos - 1; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        n--;
        for (i = 0; i < n; i++)
         {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}