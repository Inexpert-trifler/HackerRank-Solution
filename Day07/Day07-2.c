#include <stdio.h>

int main() {
    int n; 
    int i;

    if (scanf("%d %d", &n, &i) != 2) {
        return 1;
    }

    int mask = 1 << i;

    int result = n | mask;

    printf("%d\n", result);

    return 0; 
}
//Bitwise_Set i-th bit