#include <stdio.h>
int main()
{
	int n;
	printf("enter no");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i;s++)
		printf("  ");
		for(int j=0;j<(2*n - 1);j++)
		printf("* ");
		printf("\n");	
	}
	return 0 ;
}
