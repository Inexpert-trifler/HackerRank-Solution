#include <stdio.h>

int main() {
    int a, b, c;
    int large;

    
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1; 
    }



    if (a > b && a > c) {
     
        large = a;
    } else if (b > a && b > c) {
       
        large = b;
    } else {
       
        large = c;
    }

  
    printf("The largest number is : %d\n", large);

    return 0;
}

//If-Else_Largest Among Three Numbers