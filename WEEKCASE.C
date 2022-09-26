#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
       printf("enter the character\n");
   scanf("%c",&a);
      switch(a)
      {
      case 'm':
	printf("monday");
	break;
      case 't':
	printf("tuesday");
	break;
      case 'w':
	printf("wednesday");
	break;
      case 'u':
	printf("thursday");
	break;
      case 'f':
	printf("friday");
	break;
      case 's':
	printf("saturday");
	break;
      case 'd':
	printf("sunday");
	break;
      default:
	 printf("no match");
      }
getch();
}
