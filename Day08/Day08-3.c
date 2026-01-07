#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);

    n = n & ~(1 << i);

    printf("%d", n);
    return 0;
}

//Bitwise_Unset i-th Bit

//Given a number n and a position i, write a program to unset the i-th bit of n using bitwise operators.
