#include <stdio.h>

int main() {
    int h, t;
    float c;
    int hii;

    scanf("%d %f %d", &h, &c, &t);

    if (h > 50 && c < 0.7 && t > 5600) {
        hii = 10;
        printf("The grade of the steel is: %d\n", hii);
        printf("All of the conditions met.");
    }
    else if (h > 50 && c < 0.7) {
        hii = 9;
        printf("The grade of the steel is: %d\n", hii);
        printf("Two conditions met.");
    }
    else if (c < 0.7 && t > 5600) {
        hii = 8;
        printf("The grade of the steel is: %d\n", hii);
        printf("Two conditions met.");
    }
    else if (h > 50 && t > 5600) {   
        hii = 7;
        printf("The grade of the steel is: %d\n", hii);
        printf("Two conditions met.");
    }
    else if (h > 50 || c < 0.7 || t > 5600) {
        hii = 6;
        printf("The grade of the steel is: %d\n", hii);
        printf("Only one condition met.");
    }
    else {
        hii = 5;
        printf("The grade of the steel is: %d\n", hii);
        printf("None of the conditions met.");
    }

    return 0;
}

//If-Else_Steel Grade Classification