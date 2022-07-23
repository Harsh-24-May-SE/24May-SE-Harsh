// Hierarchical Inheritence

#include<iostream>
using namespace std;

class A
{
	public:
		int num1;
		
		void n1()
		{
			cout<<endl;
			cout<<"Enter Any Number :\n";
			cin>>num1;
		}
};
class B : public A
{
	public:
		void n2()
		{
			cout<<"1st Added Value = "<<num1+10<<endl;
		}
};
class C : public A
{
	public:
		void n3()
		{
			cout<<"2nd Added Value = "<<num1+20;
		}
};

main()
{
	B obj1;
	C obj2;
	
	obj1.n1();
	obj1.n2();
	
	obj2.n1();
	obj2.n3();
}
