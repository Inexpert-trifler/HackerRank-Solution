#include <stdio.h>

int main() {
    char line[128];
    double income, tax = 0.0;
    char extra;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("INVALID\n");
        return 0;
    }

    if (sscanf(line, " %lf %c", &income, &extra) != 1) {
        printf("INVALID\n");
        return 0;
    }

    if (income < -10000000.0 || income > 10000000.0) {
        printf("INVALID\n");
        return 0;
    }

    if (income < 0.0) {
        printf("INVALID\n");
        return 0;
    }

    if (income <= 250000.0) {
        tax = 0.0;
    } else if (income <= 500000.0) {
        tax = (income - 250000.0) * 0.05;
    } else if (income <= 1000000.0) {
        tax = (250000.0 * 0.05) + (income - 500000.0) * 0.20;
    } else {
        tax = (250000.0 * 0.05) + (500000.0 * 0.20) + (income - 1000000.0) * 0.30;
    }

    printf("%.2f\n", tax);
    return 0;
}
//If-Else_Tax Calculator