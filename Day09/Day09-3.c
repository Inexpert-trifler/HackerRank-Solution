#include <stdio.h>


void swap_temp(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }
    swap_temp(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

//Swap_Two_Numbers 
