#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int N, i;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
  

//Loops_FizzBuzz