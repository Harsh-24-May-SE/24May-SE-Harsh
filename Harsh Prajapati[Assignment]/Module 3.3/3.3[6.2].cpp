// Program to make Subtraction of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int a[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Elements of Matrix 1: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[2][2];
	printf("\n");
	 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Elements of Matrix 2: ");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMatrix 1 :\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("--------------------\n");
	
	printf("Matrix 2 :");
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("--------------------\n");
	
	int c[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	
	printf("Addition Of 1st & 2nd Matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d ",c[i][j]);
		}
		printf("\n");
	}
}
