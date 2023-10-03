#include <stdio.h>
int main()
{
	int n ;
	printf("enter number:");
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<=j;i++)
		printf("* ");
		for(int s=0;s<2*(n-j)-2;s++)
		printf("  ");
		for (int k=0;k<=j;k++)
		printf("* ");		
	printf("\n");
    }
	for(int j=0;j<n;j++)
	{
		for (int i=0;i<n-j;i++)
		printf("* ");
		for( int s=0;s<(2*j);s++)
		printf("  ");
		for(int k=0;k<n-j;k++)
		printf("* ");
	printf("\n");
	}
	return 0;
}
