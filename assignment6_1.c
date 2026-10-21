/*

Accept the number of electricity units consumed and calculate the total bill using the following slab-wise rates. Each slab rate applies only to units within that slab.

Expected Outpot:

Input: 80 --> Bill = 400.00

Input 150 --> Bill = 850.00

Input: 250 --> Bill = 1700.00

*/


#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Unit Consumption");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill: %.2f", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 17);
        printf("Bill: %.2f", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 17) + ((iUnits - 200) * 10);
        printf("Bill: %.2f", fBill);
    }
}

int main(void)
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
