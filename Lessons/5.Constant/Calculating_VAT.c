#include <stdio.h>

int main()
{
    //declaring constant variable
    const float vat = 0.18;
    
    float cost = 3.50;
    float cost_vat = vat*cost;

    printf("The price of the item is: £%.2f", cost);
    printf("\nThe VAT is: £%.2f", cost_vat);
    printf("\nThe total price including VAT is: £%.2f", cost + cost_vat);

    return 0;
}