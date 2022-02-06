#include<conio.h>
#include<stdio.h>
void prime()
{
 int no,c=2;
 clrscr();
 printf("Enter the number");
 scanf("%d",&no);
 while(no%c!=0)
 {
  c++;

 }
 if(c==no)
 printf("The no is Prime ");
 else
 printf("The no is not Prime");
}
void palindrome()
{
  int no,d,sum=0,r;
  printf("\nEnter the number");
  scanf("\n%d",&no);
  d=no;
  while(no!=0)
  {
    r=no%10;
    sum=sum*10+r;
     no=no/10;
  }
  if(d==sum)
  printf("Palindrome number");
  else
  printf("Not Palindrome number");
}
void armstrong()
{
   int no,cub,sum=0,r,d;
   printf("\nEnter the number ");
   scanf("%d",&no);
   d=no;
   while(no!=0)
   {
     r=no%10;
     cub=r*r*r;
     sum=sum+cub;
     no=no/10;
   }
   if(d==sum)
   printf("\nArmstrong Number");
   else
   printf("\nNot Armstrong");


}
void strong()
{
  int i,no,r,sum=0,d;
  clrscr();
  printf("\nEnter the number");
  scanf("%d",&no);
  d=no;

  while(no!=0)
  {
    int fact=1;
    r=no%10;
    for(i=1;i<=r;i++)
    {
      fact=fact*i;

    }
    sum=sum+fact;
    no=no/10;



  }

  if(d==sum)
  printf("Strong Number");
  else
  printf("Not Strong Number");
}
void main()
{
  prime();
  palindrome();
  armstrong();
  strong();
  getch();

}

