#include <stdio.h>

int main() {
    int n,num,i,d,f=0;
    scanf("%d",&n);
    for (num = 2; f < n; num++) {
        d = 0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            d++;
            
        }
    }
        if (d == 2) {   
            f++;
        }
    }
    printf("%d",num-1);
    return 0;
}