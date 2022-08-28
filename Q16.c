#include<stdio.h>
int main() {
   char  x1;
   printf("Enter a Alphabet : ");
   scanf("%c",&x1);
   if( x1> 'a' && x1<'z' )
    {
      printf("\n Entered Alphabet is lowercase=%c",x1 );
   }
   else if( x1> 'A' && x1<'Z' )
   {
    printf("  \n Entered Alphabet is uppercase=%c" ,x1);
   }
   else if(x1>'1'&&x1<'9')
    {

     printf("\n its digit ");
   }
   else
    {
         printf(" \n its special character");

   }
   return 0;

}
