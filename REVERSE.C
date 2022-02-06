#include<stdio.h>
#include<conio.h>
void main()
{
  char s[50],ch;
  int i,l;
  printf("Enter the String");
  gets(s);
  for(l=0;s[l];l++);
  {
    for(i=0;i<l/2;i++)
    {
      ch=s[i];
      s[i]=s[l-1-i];
      s[l-1-i]=ch;
    }
  }
    printf("Reverse is %s",s);
    getch();


}
