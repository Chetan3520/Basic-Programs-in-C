#include<stdio.h>
#include<conio.h>
void main()
{
   int n1,n2,i,c,d,r,sum,no;
   clrscr();
   printf("enter range");
   scanf("%d %d",&n1,&n2);
   for(i=n1;i<=n2;i++)
   {  no=i;
      d=i;
      sum=0;
      while(no!=0)
      {
	  r=no%10;
	  c=r*r*r;
	  sum=sum+c;
	  no=no/10;
      }
      if(d==sum)
      printf("%d",sum);
   }
   getch();
}

