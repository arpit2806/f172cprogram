#include<stdio.h>
#include<conio.h>
void main()
{
int a,d;
clrscr();
       printf("enter value\n");
       scanf("%d",&a);
       printf("you have entered value of %d\n",a);
       printf("enter value\n");
       scanf("%d",&d);
       printf("you have entered value of %d\n",d);
       if(a<d)
       {
       printf("%d is min number",a);
       }
       else
       {
       printf("%d is not the min number",d);
       }
getch();
}

