#include <stdio.h>

int main() {

    int N; 

 
    if (scanf("%d", &N) != 1) {
        return 1; 
    }

    if (N & 1) {
      
        printf("Odd\n");
    } else {
       
        printf("Even\n");
    }

    return 0; 
}

//Bitwise_Even or Odd