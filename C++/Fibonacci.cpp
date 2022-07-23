// Fibonacci Series

#include<iostream>
using namespace std;

main()
{
	int num,i,a=0,b=1,c;
	
	cout<<"Enter Number To Print Fibonacci Series : ";
	cin>>num;
	
	cout<<endl;
	
	for(i=1;i<=num;i++)
	{
		cout<<" "<<a;
		c=a+b;
		a=b;
		b=c;
	}
}
