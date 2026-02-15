#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Shape Not Possible");
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int a = 1; a <= (2 * i - 1); a++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//Loops_Pattern Printing - Pyramid
