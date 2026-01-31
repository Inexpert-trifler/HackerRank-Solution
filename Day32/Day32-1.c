#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
         int N;
    scanf("%d", &N);
    
            if (N <= 1) {
        printf("None");
    } else {
        int hii = 0;


        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                hii = 1;
                break;
            }
        }

        if (hii == 1) {
            printf("Composite");
        } else {
            printf("Prime");
        }
    }

    return 0;
}
