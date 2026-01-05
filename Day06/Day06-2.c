#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int age;

   
    if (scanf("%d", &age) != 1) {
        return 1;
    }

    if (age >= 18) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}

//Voting Eligibility