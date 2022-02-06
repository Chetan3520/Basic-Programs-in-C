#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
void main()
{
	int x=5,j=10;
	clrscr();
	swap(&x,&j);
	printf("x=%d\tj=%d ",x,j);
	getch();
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
