#include <stdio.h>

int main() {
    int n;
    long long t = 1;

    scanf("%d", &n);

    if (n == 0)
        return 0;

    printf("<");

    for (int i = 1; i <= n; i++) {
        printf("%lld", t);
        if (i < n)
            printf(" ");
        t *= 2;
    }

    printf(">");

    return 0;
}

//Loops_Double the Previous Term
