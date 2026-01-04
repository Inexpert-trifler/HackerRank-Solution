#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void split(int numb){
    printf("%d %d %d", (numb/100), ((numb/10)%10), (numb%10));
}

int main() {
    
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}
//Split the Number

