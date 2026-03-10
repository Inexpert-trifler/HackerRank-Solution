#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
// This code reads an integer `n` from the input, then iterates through all integers from 1 to `n`. If an integer is divisible by 3, 5, or 7, it adds that integer to the `sum`. Finally, it prints the resulting `sum`.