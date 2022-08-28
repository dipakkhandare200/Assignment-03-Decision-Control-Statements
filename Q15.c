#include<stdio.h>
int main() {
   int a;
   printf("Enter a number : ");
   scanf("%d",&a);
   if( a>0)
    {
      printf("\n Entered number is positive =%d",a );
   }
   else if( a<0 )
   {
    printf("  \n Entered number is negative  =%d" ,a);
   }
   else
    {
        printf("\n number is zero");
   }
   return 0;

}

