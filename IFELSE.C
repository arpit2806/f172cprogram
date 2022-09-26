#include<stdio.h>
#include<conio.h>
void main()
{
int a,d,b;
clrscr();
       printf("enter the value of a is\n",a);
       scanf("%d",&a);
       printf("enter the value of d is\n",d);
       scanf("%d",&d);
       printf("enter the value of b is\n",b);
       scanf("%d",&b);

       if(a>d && a>b)
       {
       printf("%d is max",a);
       }
       else if (d>b)
       {
       printf("%d is max",d);
       }
       else
       {
       printf("%d is max",b);
       }





getch();
}
