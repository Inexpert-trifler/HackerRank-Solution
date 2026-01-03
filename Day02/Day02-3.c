#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int distance(char a, char c){
return c-a;
}

int main() {
    char c,a;
    scanf("%c %c",&c,&a);
    int ans=distance(c,a);
    printf("The distance between %c and %c is %d",c,a,ans);
    
    return 0;
}
