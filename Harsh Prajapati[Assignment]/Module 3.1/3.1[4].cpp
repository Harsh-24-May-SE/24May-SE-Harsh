// Program to find the simple Interest

#include<stdio.h>
main()
{
	int i,p,r,n;
	
	printf("Enter Principle Amount :");
	scanf("%d",&p);
	
	printf("Enter Rate Of Interest :");
	scanf("%d",&r);
	
	printf("Enter Duration Of Loan In Year :");
	scanf("%d",&n);
	
	i = p*r*n/100;
	
	printf("\nYour Amount Of Simple Interest :Rs.%d/-",i);
	
}
