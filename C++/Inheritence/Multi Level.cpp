// Multilevel Inheritence

#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"This Is Class A\n";
		}
};

class B : public A
{
	public:
		void displayB()
		{
			cout<<"This Is Class B\n";
		}
};

class C : public B
{
	public:
		void displayC()
		{
			cout<<"This Is Class C\n";
		}
};

main()
{
	C obj;
	
	obj.displayA();
	obj.displayB();
	obj.displayC();
}










