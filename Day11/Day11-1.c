#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hii = a - b;
    int min = hii >> 31;
    
    if (min&1){
    printf("%d",a);
    }
    
    else {
        printf("%d",b);
    }
    return 0;
}

//Bitwise_Minimum Without Comparison Operators
