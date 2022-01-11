/* A program to generate student report using Hybrid Inheritance */
#include<iostream>
#include<conio.h>

using namespace std;


// Creating a Base class
class Stud_details
{
	   int sno;
	   char sna[10];
	   
   public:
   		void Details()    // to read Student name and number
		{
		  cout<<"Enter Student Number:";
		  cin>>sno;
		  cout<<"Enter Student Name:";
		  cin>>sna;
		  cout<<endl;
		}
		
		void Output()      // to display student name and number
		{
		  cout<<"Student Number:"<<sno<<endl;
		  cout<<"Student Name:"<<sna<<endl;
		}
};


class Stud_marks : public Stud_details  // Derived class (single inheritance)
{
   protected:
	   int S1, S2, S3;

   public:
	   void marks()     // to read student marks 
	   {
	      cout<<endl<<"Enter S1, S2, S3 Marks: ";
	      cin>>S1>>S2>>S3;
	      cout<<endl;
	   }
	
	   void write()    // to display student marks
	   {
	      cout<<"Student Marks:";
	      cout<<S1<<", "<<S2<<", "<<S3<<endl;
	   }
};

class Srt_weightage  //base class
{
   protected:
   		int swpt;
   		
   public:
	   void sports()  // to read sports weightage
	   {
	      cout<<endl<<"Enter Sports Weightage:";
	      cin>>swpt;
	      cout<<endl;
	   }
	
	   void weightage()     // to display sports weightage
	   {
	      cout<<"Sports Weightage:"<<swpt<<endl;
	   }
};

class Total : public Stud_marks, public Srt_weightage   // Dreived class (multiple inheritance)
{
   		int total;

   public:
	   void Display()    // to calculate and display the summation of marks 
	   {
	      total = S1 + S2 + S3 + swpt;
	      cout<<endl<<"Total Marks:"<<total;
	   }
};

int main()
{
   Total ob;
   ob.Details();
   ob.Output();
   ob.marks();
   ob.write();
   ob.sports();
   ob.weightage();
   ob.Display();
   getch();
}
