/* A program to implement Constructor in derived class */
#include<iostream>
#include<conio.h>

using namespace std;

class Base_cls_1    // Base class 
{
		int a;
		
	public:
	// Defining member function to read and display a integer variable
		Base_cls_1 (int x)      // Parameterised constructor
		{
			a = x;
		}
		
		void put()
		{
			cout<<a<<endl;
		}
};

class Base_cls_2    //Base class
{
		int b;
		
	public:
	// Defining member function to read and display a integer variable
		Base_cls_2 (int y)           // Parameterised constructor
		{
			b = y;
		}
		
		void write()
		{
			cout<<b<<endl;
		}
};

class Dreived_cls : public Base_cls_1, public Base_cls_2       //Dreived Class
{
		int c,d;
		
	public:
		Dreived_cls(int x1, int x2, int x3, int x4) : Base_cls_1(x1), Base_cls_2(x2)          // constuctor in derived class statement
		{
			c = x3;
			d = x4;
		}
		
		void Display()
		{
			cout<<c<<endl<<d;
		}
		
};


int main()
{
		Dreived_cls obj(1,2,3,4);
		obj.put();
		obj.write();
		obj.Display();
		getch();
}
