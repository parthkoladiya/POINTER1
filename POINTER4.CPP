#include<iostream.h>
#include<conio.h>
class POINTER
{
    public:
          virtual void accessdata() = 0;
};
class DD : public POINTER
{
    public:
	void globledata()
        {
            cout << "Your Faster Car ";
        }
        void accessdata()
        {
	    cout << "Your access data is hear";
        }
};
void main()
{
    POINTER *p;
    DD obj;
    clrscr();
    p = &obj;
    p->accessdata();
    getch();
}