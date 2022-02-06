#include<iostream.h>
#include<conio.h>
class complex
{
  private:
  int a,b;
  public:
  void setdata(int x,int y)
  {
     a=x;
     b=y;
  }
  void showdata()
  {
     cout<<"a="<<a<<"b="<<b;
  }
  complex add(complex c)
  {
     complex temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
     return(temp);
  }
};
void main()
{
   clrscr();
   complex c1,c2,c3;
   c1.setdata(3,4);
   c2.setdata(5,6);
   c3=c1.add(c2);
   c3.showdata();
   getch();
}