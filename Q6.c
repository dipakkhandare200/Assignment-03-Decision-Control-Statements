 #include<stdio.h>
 int main()
 {
     int a,b;
     printf("enter a number two digit  =");
     scanf("%d%d",&a,&b);

     if(a>b)
     {
         printf("the value of first digit %d is greater",a);

     }
     if(b>a)
     {
        printf("the value of second  digit %d is greater",b);

     }
     if(a==b)
     {
         printf("both entered digit are same a=%d,b=%d\n",a,b);
     }

 }



