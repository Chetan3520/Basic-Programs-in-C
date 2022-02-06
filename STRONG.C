#include<stdio.h>
#include<conio.h>
void main()
{
	int no,r,i,fact,sum,temp;
	clrscr();
	printf("Enter the no");
	scanf("%d",&no);
	sum=0;
	temp=no;
	while(no!=0)
	{
		r=no%10;
		fact=1;
		for(i=1;i<=r;i++){
		fact=fact*i;
		}
		sum=sum+fact;
		no=no/10;




	}
	if(sum==temp)
	printf("Strong no");
	else
	printf("Not");
	getch();
}

	getch();

