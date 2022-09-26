#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
       printf("enter the any number");
       scanf("%d",&a);
       switch(a)
       {
       case 1:
	    printf("one\n");
       case 2:
	    printf("two\n");
       case 3:
	    printf("three\n");
       default:
	    printf("no match\n");
       }
getch();
}