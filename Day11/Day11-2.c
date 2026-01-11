#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int r = 0;

    r= (n & 1) +
       ((n >> 1) & 1) +
       ((n >> 2) & 1) +
       ((n >> 3) & 1);

    printf("%d", r);
    return 0;
}
//Bitwise_Count Number of Set Bits