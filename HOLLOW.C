#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,col;
	clrscr();
	printf("Enter the row and col");
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{

		printf("\n");
		for(j=1;j<=col;j++)
		{
			if(i==1||i==row||j==1||j==col)
			printf(" * ");
			else
			printf("   ");

		}


	}
	getch();
}
