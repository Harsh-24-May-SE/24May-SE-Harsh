// Recursive Function (find factorial of number)

#include<iostream>
using namespace std;

int fact(int a)
{
	if(a<=0)
	{
		return 1;
	}
	return a*fact(a-1);
}

int main()
{
	int x;
	
	cout<<"Enter Any Number : ";
	cin>>x;
	
	cout<<"Factorial IS ="<<fact(x);
	
	return 0;
}
