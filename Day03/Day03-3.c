#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width){
    int rarea = (length*width);
    return rarea;
}

int main() {
    
    int l, b;
    
    scanf("%d %d",&l, &b);
    printf("The area is: %d units", area(l,b));
    return 0;
}
//Area of Rectangle