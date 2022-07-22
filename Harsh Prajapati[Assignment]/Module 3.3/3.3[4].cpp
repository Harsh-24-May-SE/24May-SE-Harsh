// WAP to find reverse of string using recursion

#include<stdio.h>

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
	
	printf("Enter A Number :");
	scanf("%d",&x);
	
	printf("Factorial = %d",fact(x));
	
	return 0;
}
