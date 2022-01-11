/* A program to implement Binary Operator Overloading */
#include<iostream>
#include<conio.h>

using namespace std;

class A
{
	float real, img;
	public:
		A()
		{
		}
		
		A(float x, float y)
		{
			real = x;
			img = y;
		}
		
		void show()
		{
			cout<<real<<" + j"<<img<<endl;
		}
		
		A operator +(A obj);
};

A A:: operator+(A obj)
{
	A obj1;
	obj1.real = real + obj.real;
	obj1.img = img + obj.img;
	return obj1;
}

int main()
{
	A a(1.1,2.2);
	A b(2.2,1.1);
	
	A c = a + b;
	
	cout<<endl<<"Complex Number 1 = ";
	a.show();
	cout<<endl<<"Complex Number 2 = ";
	b.show();
	cout<<endl<<"Sum of Complex Number 1 and Complex Number 2 = ";
	c.show();
	
	getch();
}
