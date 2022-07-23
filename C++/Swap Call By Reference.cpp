// Swapping Value Call By Reference

#include<iostream>
using namespace std;

int swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
main()
{
	int a,b;
	
	cout<<"Enter Two Number For Swap :";
	cin>>a>>b;
	
	swap(&a,&b);
	
	cout<<"Swapping Values = "<<a;cout<<" "<<b;
}
