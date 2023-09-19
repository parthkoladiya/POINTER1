#include<iostream.h>
#include<conio.h>
class assembly
{
    private:
    int a,b,ans;
    public :
            void printdata()
            {
                cout<<"enter the data"<<endl;
                cin>>a>>b;
                ans = a+b;
                cout << ans;
            }
};
class  business : public assembly
{
   public : 
        void display()
        {
            printdata();
        }
};
void main() 
{
    assembly *p;
    business obj1;
    clrscr();
    p->printdata();
    obj1.display();
    getch();
}