// Basic Class Program

#include<iostream>
using namespace std;

class A
{
	public:
	
	int a=12; // member of class
	
	// memeber function
	void display()
	{
		cout<<"A = "<<a;
	}	
};

main()
{
	A obj;
	
	obj.display(); // to call function
}
