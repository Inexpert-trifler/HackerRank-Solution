#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>




int getLastDigit(int n) {

    int without_last_digit = n / 10;
    

    int multiple_of_ten = without_last_digit * 10;
    

    int last_digit = n - multiple_of_ten;
    
    return last_digit;
}

int main() {
    int a, b;


    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }


    int last_digit_a = getLastDigit(a);
    int last_digit_b = getLastDigit(b);


    if (last_digit_a == last_digit_b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//Check if Two Numbers Have Same Last Digit