#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n, sum = 0, p = 1;

    scanf("%d", &n);

    for (int t = n; t > 0; t /= 10) {
        int digit = t % 10;
        sum += digit;
        p *= digit;
    }

    printf("%d", p - sum);

    return 0;
}

//Loops_Sum and Product of Digits