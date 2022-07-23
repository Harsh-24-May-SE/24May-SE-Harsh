// Multi level Addition
#include<iostream>
using namespace std;

class A
{
	public:
		int num1;
		
		void n1()
		{
			cout<<"Enter Number 1:\n";
			cin>>num1;
		}
};
class B : public A
{
	public:
		int num2;
		
		void n2()
		{
			cout<<"Enter Number 2:\n";
			cin>>num2;
		}
};
class C : public B
{
	public:
		int add;
		
		void sum()
		{
			add=num1+num2;
			cout<<"Addition Of "<<num1;cout<<" & "<<num2;cout<<" = "<<add;
		}
};

main()
{
	C obj;
	
	obj.n1();
	obj.n2();
	obj.sum();
}
