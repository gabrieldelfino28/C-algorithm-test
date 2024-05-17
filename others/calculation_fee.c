#include <stdio.h>

void calcFee(int n, float productPrice)
{
   if (n > 100)
   {
      n = 100;
   }
   else if (n < 1)
   {
      n = 1;
   }
   float percentageFee = n / 100;
   float finalPrice = productPrice * (1 +  percentageFee);
   printf("\nfinal price of the product X: %.2f\n", finalPrice);
}