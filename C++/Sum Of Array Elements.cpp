// Sum Of Array Elements

#include<iostream>
using namespace std;

int main()
{
	int a[5],i,total=0;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter Element :";
		cin>>a[i];
		
		total=total+a[i];
	}
	
	cout<<"Sum Of Element = "<<total;
	
	return 0;
}
