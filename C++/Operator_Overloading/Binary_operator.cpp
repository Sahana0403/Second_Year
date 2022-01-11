/* A program to implement Binary Operator Overloading */
#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
	float real, img;
	public:
		Complex()
		{
		}
		
		Complex(float x, float y)
		{
			real = x;
			img = y;
		}
		
		void show()
		{
			cout<<real<<" + j"<<img<<endl;
		}
		
		Complex operator + (Complex obj);
};

Complex Complex:: operator + (Complex obj)
{
	Complex obj1;
	obj1.real = real + obj.real;
	obj1.img = img + obj.img;
	return obj1;
}

int main()
{
	Complex number_1(1.1,2.2);
	Complex number_2(2.2,1.1);
	
	Complex number_3 = number_1 + number_2;
	
	cout<<endl<<"Complex Number 1 = ";
	number_1.show();
	cout<<endl<<"Complex Number 2 = ";
	number_2.show();
	cout<<endl<<"Sum of Complex Number 1 and Complex Number 2 = ";
	number_3.show();
	
	getch();
}
