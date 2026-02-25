#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long num;
    int r = 0;

    scanf("%lld", &num);

    for (long long t = num; t > 0; t /= 10) {
        int digit = t % 10;
        if (num % digit == 0)
            r++;
    }

    printf("%d", r);

    return 0;
}
//Loops_Count the Digits That Divide a Number