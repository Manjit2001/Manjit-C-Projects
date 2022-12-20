#include<iostream>
using namespace std;
class student
{
	private:
	 int rollno;
	 string name;
	 float marks;
	 
	public:
	  student()
	  {
	  	rollno=1;
	  	name="manjit";
	  	marks=90.09;
       }
       student(int r,string n,float m)
	   {
	   	rollno=r;
	   	name=n;
	   	marks=m;
		} 
		void display()
		{
			cout<<"\n rollno="<<rollno;
			cout<<"\n name"<<name;
			cout<<"\n marks"<<marks;
		}
		
};
main()
{
	student s1;
	s1.display();
	student s2(2,"abhya",7878.988);
	s2.display();
}
