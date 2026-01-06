#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    long long n, low, high;

    if (scanf("%lld %lld %lld", &n, &low, &high) != 3) {
        return 1; 
    }
    if (n >= low && n <= high) {
        printf("In Range\n");
    } else {
        printf("Out of Range\n");
    }

    return 0; 
}

//Range Check