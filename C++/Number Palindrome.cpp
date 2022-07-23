// Number is Palindrome Or Not

#include<iostream>
using namespace std;

main()
{
	int num,c,rem,rev=0;
	
	cout<<"Enter Any Number : ";
	cin>>num;
	c=num;
	
	while(num>0)
	{
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	cout<<endl<<"Reverse Number : "<<rev;
	
	if(c==rev)
	{
		cout<<endl<<"Number Is Palindrome";
	}
	else
	{
		cout<<endl<<"Number Is Not Palindrome";
	}
}
