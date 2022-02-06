#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("enter the two no");
	scanf("%d%d",&x,&y);
	printf("greater no is %d",x>y? x:y);
	getch();
}