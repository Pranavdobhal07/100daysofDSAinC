#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   
    int isIdentity = 1;   

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value;
            scanf("%d", &value);   

            if (i == j) {
                if (value != 1) {
                    isIdentity = 0;   
                }
            } else {
                if (value != 0) {
                    isIdentity = 0;   
                }
            }
        }
    }

    if (isIdentity)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}