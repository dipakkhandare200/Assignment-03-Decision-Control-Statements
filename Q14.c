#include<stdio.h>
int main() {
   int a;
   printf("Enter a number : ");
   scanf("%d",&a);
   if( a%7==0)
    {
      printf("\n Entered number is divisble by 7=%d",a );
   }
   else if( a%3==0 )
   {
    printf("  \n Entered number is divisble by 3 =%d" ,a);
   }
 else
  printf("\n not divisble by 3 and 7");
   return 0;

}
