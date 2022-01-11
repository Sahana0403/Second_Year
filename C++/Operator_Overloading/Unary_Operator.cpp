/* A program to implement Unary Operator overloading */
#include<iostream>
#include<conio.h>

using namespace std;

class A                   // Base class
{
		int a,b,c;
	
	public:
	// initialising and displaying the data members
		void get(int x, int y, int z)
		{
			a = x;
			b = y;
			c = z;
		}
		
		void Display()
		{
			cout<<a<<", "<<b<<", "<<c<<endl;
		}
		
		void operator -();             // Declaring unary operator overloading funtion
};

void A :: operator -()                // Defining unary operator overloading funtion
{
		a = -a;
		b = -b;
		c = -c;
}

int main()
{
		A obj;
		obj.get(1,-2,3);
		
		cout<<"Before Unary operator overloading : ";
		obj.Display();
		
		-obj;                                 //Unary operator overloading Statemenyt
		
		cout<<endl<<"After Unary operator overloading : ";
		obj.Display();
		
		getch();
}
