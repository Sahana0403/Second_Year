/* A Program to impelemt function overloading by swapping character values using call by refrence, float valus using call by values and integer values without using temporary variable */

#include<iostream>
using namespace std;

// Function definition to swap characters using call by refrence 
void swap(char &x, char &y)
{
	char temp;
	temp = x;
	x = y;
	y = temp;
}


// Function definition to swap float using call by value
void swap(float x, float y)
{
	float temp;
	temp = x;
	x = y;
	y = temp;
	cout<<x<<" "<<y;
}

// Function definition to swap integer without using temporary variable
void swap(int x, int y)
{
	
	x = x + y;
	y = x - y;
	x = x - y;
	cout<<x<<" "<<y;
}


int main()
{
	char a = 'A', b = 'B';
	cout<<"Before swap : "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"Swapping of character : "<<a<<" "<<b<<endl;
	
	float c = 10.5 ,d = 20.5;
	cout<<endl<<"Before swap : "<<c<<" "<<d;
	cout<<endl<<"Swapping of Float values : ";
	swap(c,d);
	cout<<endl<<"To show call by value : "<<c<<" "<<d<<endl;	
	
	int e = 10, f =20;
	cout<<endl<<"Before swap : "<<e<<" "<<f;
	cout<<endl<<"Swapping of Integer values : ";
	swap(10,20);
	
}
