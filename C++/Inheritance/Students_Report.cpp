/* A program to generate student report using Hybrid Inheritance */
#include<iostream>
#include<conio.h>

using namespace std;

class A
{
	   int sno;
	   char sna[10];
	   
   public:
   		void get()
		{
		  cout<<"Enter Student Number:";
		  cin>>sno;
		  cout<<"Enter Student Name:";
		  cin>>sna;
		  cout<<endl;
		}
		
		void put()
		{
		  cout<<"Student Number:"<<sno<<endl;
		  cout<<"Student Name:"<<sna<<endl;
		}
};

class B : public A
{
   protected:
	   int S1, S2, S3;

   public:
	   void read()
	   {
	      cout<<endl<<"Enter S1, S2, S3 Marks: ";
	      cin>>S1>>S2>>S3;
	      cout<<endl;
	   }
	
	   void write()
	   {
	      cout<<"Student Marks:";
	      cout<<S1<<", "<<S2<<", "<<S3<<endl;
	   }
};

class C
{
   protected:
   		int swpt;
   		
   public:
	   void input()
	   {
	      cout<<endl<<"Enter Sports Weightage:";
	      cin>>swpt;
	      cout<<endl;
	   }
	
	   void output()
	   {
	      cout<<"Sports Weightage:"<<swpt<<endl;
	   }
};

class D : public B, public C
{
   		int total;

   public:
	   void show()
	   {
	      total = S1 + S2 + S3 + swpt;
	      cout<<endl<<"Total Marks:"<<total;
	   }
};

int main()
{
   D ob;
   ob.get();
   ob.put();
   ob.read();
   ob.write();
   ob.input();
   ob.output();
   ob.show();
   getch();
}
