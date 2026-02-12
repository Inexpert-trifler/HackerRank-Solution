#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    for (int t = N; t > 0; t/= 10) {
        sum += t % 10;
    }

    if (N % sum == 0)
        printf("%d is a harshad number", N);
    else
        printf("%d is not a harshad number", N);

    return 0;
}

//Loops_Harshad Number Checker