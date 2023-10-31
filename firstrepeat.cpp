#include <stdio.h>

int main()
{
	int n,k=0;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(int i=0;i<n;i=i+1)
	{
		for(int j=i;j<n;j=j+1)
		{ if  (j+1!=n)
		{
			if ((a[i]==a[j+1]))
			{
			printf("%d ",a[i]);
			k=k+1;
			break ;
			}
		}}
		if (k=1) break;

    }

	return 0 ;
	
}
