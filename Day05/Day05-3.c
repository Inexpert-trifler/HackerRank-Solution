#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int h, m;
    int converted_h;
    char meridian[3];

 
    if (scanf("%d %d", &h, &m) != 2) {
        return 1; 
    }


    if (h >= 0 && h <= 11) {
        strcpy(meridian, "AM");

        if (h == 0) {
            converted_h = 12;
        } else {
            converted_h = h;
        }
    } else { 
        strcpy(meridian, "PM");

        if (h == 12) {
            converted_h = 12;
        } else {
    
            converted_h = h - 12;
        }
    }
    printf("%d:%02d %s\n", converted_h, m, meridian);
    return 0;
}
//Convert 24-Hour Time to 12-Hour Format