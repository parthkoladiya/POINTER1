#include<iostream.h>
#include<conio.h>
class POINTER1
{
private:
    int i,j;
    public:
	    void loopdata()
	    {
		for(i=1;i<=5;i++)
		for ( j =1 ; j <=5 ; j++ )
		cout<<"\n"<<endl;
	    }
};
class Demo : public POINTER1
{
private:
    int name[20];
public:
	    void printdata()
	    {
		  cout<<"Enter your name : ";
		  cin>>name[20];
		  cout << name[20];
            }
};        
void main() 
{
     POINTER1 *p;
     Demo obj;
    clrscr();
     p->loopdata();
     obj.printdata();
    getch ();
};    