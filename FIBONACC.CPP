#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c;
	clrscr();
	while(c<10)
	{
		c=a+b;
		b=c;
		a=b;
		printf(" %d ",c);

	}
	getch();
}

