#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int pos, x;
    scanf("%d", &pos);
    scanf("%d", &x);

    int idx = pos - 1;

    for (int i = n; i > idx; i--) 
    {
        a[i] = a[i - 1];
    }

    a[idx] = x;

    for (int i = 0; i < n + 1; i++) 
    {
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }

    return 0;
}