#include <stdio.h>

void mirror_verdict(int N) {
    const char *result;
    
    if (N < 1) {
        result = "INVALID";
        printf("%s\n", result);
        return;
    }

    int condition_count = 0;
    
    int is_C1_met = 0;
    int is_C2_met = 0;
    int is_C3_met = 0;

    if ((N % 2 == 0) && (N > 10)) {
        is_C1_met = 1;
        condition_count++;
    }
    
    if ((N > 15) && (N % 3 == 0)) {
        is_C2_met = 1;
        condition_count++;
    }
    
    if (N % 7 == 0) {
        is_C3_met = 1;
        condition_count++;
    }

    switch (condition_count) {
        case 3:
            result = "SUPERNATURAL";
            break;
        case 2:
            result = "MIRACULOUS";
            break;
        case 1:
            result = "MAGICAL";
            break;
        case 0:
        default:
            result = "NORMAL";
            break;
    }


    printf("The verdict for the number %d is: %s\n", N, result);
}

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    mirror_verdict(N);
    
    return 0;
}

//If-Else_Magical Mirror