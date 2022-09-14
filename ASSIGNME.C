#include<stdio.h>
#include<conio.h>
void main()
{
int a=23,b;

clrscr();
a+=5;
       printf("after change %d\n",a);
a-=2;
       printf("after change  %d\n",a);
a*=3;
       printf("after change %d\n",a);
a/=2;
       printf("after change %d\n",a);
a%=3;
       printf("after change %d\n",a);
b&=4;
       printf("after change %d\n",b);
a^=5;
       printf("after change %d\n",a);
a|=9;
       printf("after change %d\n",a);

getch();
}