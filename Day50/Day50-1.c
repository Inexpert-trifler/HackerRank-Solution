#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;   
    int x;
    

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    
        scanf("%d", &x);
        sum += x;
    }

    printf("%d", sum);

    return 0;
}
//Arrays_Find the Sum of All Elements in an Array
