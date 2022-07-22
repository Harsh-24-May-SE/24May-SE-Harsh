/* 
	take two Array input from user and
	sort them in ascending or descending order as per user’s choice
*/

#include<stdio.h>
int main()
{
	int a[5],i,j,temp,ag;
	
	printf("Enter Array Elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter 1 Or 2 for Ascending Or Descending:");
	scanf("%d",&ag);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(ag==1)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			else if(ag==2)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	printf("Array Elements :");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
