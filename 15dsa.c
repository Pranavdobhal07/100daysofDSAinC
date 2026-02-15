#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);   

    int sum = 0;              

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int value;
            scanf("%d", &value);  

            if (i == j) {         
                sum += value;
            }
        }
    }

    printf("%d", sum);        

    return 0;
}