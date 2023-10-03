#include <stdio.h>
int main()
{
	int n ;
	printf("enter number:");
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<n-j;i++)
		{
			printf("* ");
		
		}
	printf("\n");
	}
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<=j;i++)
		{
			printf("* ");
		
		}
	printf("\n");
	}
	return 0;
}
