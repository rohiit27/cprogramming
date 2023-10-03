#include <stdio.h>
int main()
{
	int n ;
	printf("enter number:");
	scanf("%d",&n);
	int k=0;
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<=j;i++)
		{	
			printf("%d ",++k);
		
		}
	printf("\n");
	}
	return 0;
}
