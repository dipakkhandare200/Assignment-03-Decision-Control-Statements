 #include<stdio.h>
 int main()
 {
     int a;
     printf("enter a number to check even or odd =");
     scanf("%d",&a);
     while(a>1)
     {
       a=a-2;
     }
     if(a == 0)
     {
         printf("enter number is even");

     }
     else
     {
                  printf("enter number is odd");

     }
 }

