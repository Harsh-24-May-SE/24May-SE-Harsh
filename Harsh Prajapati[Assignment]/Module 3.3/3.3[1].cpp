#include<stdio.h>
int main() 
{
  int n;
  int a[10];
  
  printf("Enter the number of elements (1 to 10): ");
  scanf("%d",&n);

  for (int i = 0; i < n; ++i) 
  {
    printf("Enter number [%d]: ",i+1);
    scanf("%d", &a[i]);
  }

  // storing the largest number to arr[0]
  for(int i=1;i<n;++i) 
  {
    if (a[0]<a[i])
	{
      a[0] = a[i];
    }
  }

  printf("Largest element = %d",a[0]);

  return 0;
}

