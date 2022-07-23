// Sum Of Two Number

#include<iostream>
using namespace std;

class A
{
	public:
		
		void display(int a,int b)
		{
			cout<<"Addition = "<<a+b;
		}
};

main()
{
	A op;
	
	int a,b;
	
	cout<<"Enter Two Number :";
	cin>>a>>b;
	
	op.display(a,b);
}
