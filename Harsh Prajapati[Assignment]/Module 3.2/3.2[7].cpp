// Fibonacci Series :

#include<stdio.h>
main()
{
	int n,i,a=0,b=1,c;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
