#include <stdio.h>
int main()
{
	int n ;
	printf("enter number:");
	scanf("%d",&n);
	int k=0;
	for(int j=0;j<n;j++)
	{
		++k;
		for (int i=0;i<=j;i++)
		{
			printf("%d",k);
			if(i==j) printf("");
			else printf("*");
		}
	printf("\n");
	}
	for(int j=0;j<n;j++)
	{
		
		for (int i=0;i<n-j;i++)
		{
			printf("%d",k);
			if(i==n-j-1) printf("");
			else printf("*");
		}
		--k;
	printf("\n");
	}
	return 0;
}
