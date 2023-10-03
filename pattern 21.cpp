#include <stdio.h>
int main()
{
	int n,m ;
	printf("enter starting int and no of rows:");
	scanf("%d" "%d",&m,&n);
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<=j;i++)
		{
			printf("%d ",m);
		
		}
		m++;
	printf("\n");
	}
	for(int j=0;j<n;j++)
	{
		m--;
		for (int i=0;i<n-j;i++)
		{
			printf("%d ",m);
		
		}
		
	printf("\n");
	}
	return 0;
}
