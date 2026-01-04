#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d) {
       
    int combined = a * 1000 + b * 100 + c * 10 + d;
    return combined;
}

int main() {
    
    int a, b, c, d;

    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {       
        return 1; 
    }
  
    int number_abcd = buildNumber(a, b, c, d);

    long final_result = (long)number_abcd * 5;
    
    printf("The number is: %ld\n", final_result);

    return 0;
}
//5th Multiple of Joined Number