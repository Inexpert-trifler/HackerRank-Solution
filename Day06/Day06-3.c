#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discounted(float price, float percent) {
    float discountAmount = (price *percent) /100.0;
    
    float discountedPrice = price - discountAmount;
    
    
    return discountedPrice;
}

int main() {
    float original_price, discount_percent;
    float final_price;

    
    if (scanf("%f %f", &original_price, &discount_percent) != 2) {
        return 1;
    }

    final_price = discounted(original_price, discount_percent);

    printf("The final price is: %f\n", final_price);

    return 0;
}
//Discounted Price
