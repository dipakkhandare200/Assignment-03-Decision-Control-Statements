#include<stdio.h>
int main() {
   int a,b,c;
   printf("Enter a value of triangle side a,b,c : ");
   scanf("%d%d%d",&a,&b,&c);
   if( a+b>c)
    {
      printf("\n triangle is valid ");
   }
   else if( b+c>a )
   {
    printf(" \n triangle is valid");
   }
   else if(a+c>b)
    {

     printf("\n triangle is valid ");
   }
   else
    {
         printf(" \n its not valid ");

   }
   return 0;

}

