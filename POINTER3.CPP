#include<iostream.h>
#include<conio.h>
class Demo
{
   public:
    virtual void Getdata() = 0;
};
class Test : public Demo
{
    public:
    void setData()
    {
	cout<<"Hello All Friends";
    }
    void Getdata()
    {
	cout<<"\n\tTest Class Data ";

    }
};
void main()
{
   Demo *p;
   Test obj;
   clrscr();
   p=&obj;
   p->Getdata();
   getch();
}