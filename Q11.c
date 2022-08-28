#include<stdio.h>
int main() {
   float a,b,c,d,e;
   printf("Enter a five subject marks : ");
   scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
   if( a>33&&b>33&&c>33&&d>33&&e>33)
        {
      printf("\n your result is pass" );
   }
   else
   {
             printf("  \n your result is failed" );

   }
   return 0;
}

