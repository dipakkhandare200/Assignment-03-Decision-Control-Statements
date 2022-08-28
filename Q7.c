
 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int a,b,c,dis,r1,r2;
     printf("enter the value of a,b,c  =");
     scanf("%d%d%d",&a,&b,&c);
     dis=b*b-4*a*c;
     if(dis>0)
     {
         r1=(-b+sqrt(dis))/(2*a);
         r2=(-b-sqrt(dis))/(2*a);

         printf("the value is real  %d & distinct %d",r1,r2);

     }
    else  if(dis=0)
     {
         r1=r2=-dis/2*a;
        printf("both real %and equal%d",r1,r2);

     }
     else
     {
         printf("r1&r2 are imagenary");
     }

 }
