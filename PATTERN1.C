#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	int a[5]={1,2,3,4,5};
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{

			if(j<=i)
			{
				printf(" %d ",a[j]);


			}
		 }
		 printf("\n");



	}
	getch();



}