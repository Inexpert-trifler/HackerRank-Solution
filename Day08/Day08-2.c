#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num;
    scanf("%f", &num);

    int value = (int)num;  

    printf("Rounded Value = %d", value);
    return 0;
}

//Rounded Value - Remove Decimals

//Write a program that takes a floating-point number and prints it without decimal values.