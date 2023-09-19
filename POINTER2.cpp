#include <iostream.h>
#include<conio.h>
class Animal 
{
public:
     void makeSound() 
    {
        cout << "Animal makes a generic sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal 
{
public:
    void makeSound()  
    {
        cout << "Cat meows" << endl;
    }
};

void main() 
{
    Animal *p ;

    Dog dog;
    Cat cat;
    clrscr();
    p = &dog;
    p->makeSound(); 

    p = &cat;
    p->makeSound(); 

    getch();
}
