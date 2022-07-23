// Add Two Value Using Function

#include<iostream>
using namspace std;

int add(int x, int y)
{
	return x+y;
}
main()
{
	int a,b;
	
	cout<<"Enter Two Number :";
	cin>>a>>b;
	
	cout<<"Addition = "<<add(a,b);
}
