/* A program to implement Binary Operator Overloading */
#include<iostream>
#include<conio.h>

using namespace std;

//Creating a class to read and write complex numbers
class Complex
{
	float real, img;    
	
	public:
		Complex()      // default constuctor
		{
		}
		
		Complex(float x, float y)     // creating parameterised constructor to initialize data members 
		{
			real = x;
			img = y;
		}
		
		void Display()               // defining member function to display the output
		{
			cout<<real<<" + j"<<img<<endl;
		}
		
		Complex operator + (Complex obj);          // declaring the binary operator overloading function
};

Complex Complex:: operator + (Complex obj)         // defining the binary operator overloading function
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
	
	Complex number_3 = number_1 + number_2;    //Binary operator overloading Statement 
	
	cout<<endl<<"Complex Number 1 = ";
	number_1.Display();
	cout<<endl<<"Complex Number 2 = ";
	number_2.Display();
	cout<<endl<<"Sum of Complex Number 1 and Complex Number 2 = ";
	number_3.Display();
	
	getch();
}
