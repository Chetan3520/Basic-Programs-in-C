#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   clrscr();
   for(i=1;i<6;i++)
   {
      for(j=1;j<6;j++)
      {
       if((i==1&&j%2==0)||(i==2&&j%2!=0)||(i-j==2)||(i+j==8))
       {
	 printf(" C ");
       }
       else
       {
	 printf("   ");
       }


      }
      printf("\n");

   }
   getch();




}