
#include<stdio.h>
int main() {
   int a,b,c;
   printf("Enter a three numbers : ");
   scanf("%d%d%d", &a,&b,&c);
   if( (  (a>b)&&(a>c)))
        {
      printf("%d  greatest number is.",a);
   }

   else if(   (b>a&&b>c)  )
   {
           printf("%d  greatest number is.",b);

   }
   else if((c>a&&c>b))
           {

             printf("%d  greatest number is.",c);
           }
else
{
      printf("\n  all entered number are equal =%d ",a);
}
   return 0;
}
