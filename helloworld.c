#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "others/calcLib.h"
#include "others/calcLib.c"

#include "when_you_know.h"
#include "when_you_know.c"

#include "others/calculation_fee.c"

int fibbo(int n);

int main(void)
{  
   printf("This simple and small algorithm has the objective of\nTesting some OO principles in C/C++\n\n");
   int n = 0;
   printf("\nFibonacci Algorithm test: \n");

   for (int i = 0; i <= 20; i++)
   {
      printf("%d, ", fibbo(i));
   }

   printf("\n\nCalculations tests importing another C file.\n\n");
   int a = 6;
   int b = 2;
   printf("\nSum result: %d", Sum(a, b));
   printf("\nSub result: %d", Sub(a, b));
   a += 2;
   printf("\nDiv result: %d", Division(a, b));
   b = 8;
   printf("\nMul result: %d\n", Mul(a, b));

   VoidPrinter();
   printer();
   calcFee(25, 100);
   
   system("PAUSE");
   return 0;
}

int fibbo(int n)
{
   if (n == 0)
   {
      return 0;
   }
   if (n == 1 || n == 2)
   {
      return 1;
   }
   return fibbo(n - 1) + fibbo(n - 2);
}