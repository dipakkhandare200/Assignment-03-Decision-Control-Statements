
#include<stdio.h>
int main() {
   float cp,sp,profit,loss;
    float a,b;
   printf("Enter a cost price & selling price : ");
   scanf("%f%f", &cp,&sp);
   profit=sp-cp;
   loss=cp-sp;
   a = (profit/cp)*100;
    b = (loss/cp)*100;
   if( b>a )
        {
      printf("\n percentage of loss is %f ",b);
   }
   else
   {
             printf("  \n percentage of profit is%f",a);

   }
   return 0;
}

