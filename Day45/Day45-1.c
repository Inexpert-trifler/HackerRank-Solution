#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    if(n<=2)
    {
        printf("Shape Not Possible");     
    }
    else{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0||i==n-1||j==0||j== n-1)
                    printf("*");
                else
                    printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
//Loops_Border Pattern Printer