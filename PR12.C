#include<stdio.h>
#include<conio.h>
void main()
{
int a,d;
float area;
clrscr();
	printf("enter value of a and d");
	scanf("%d %d",&a,&d);
	area=0.5*a*d;
	printf("enter value of triangle is 0.5*%d*%d=%d",a,d,area);
getch();
}

