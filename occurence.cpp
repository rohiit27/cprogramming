#include <stdio.h>

int main()
{
	int n,k;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n],t=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter number");
	scanf("%d",&k);
	for(int i=0;i<n;i=i+1)
	{
		if (a[i]==k) t=t+1;
    }

	printf("occurance =%d ",t);
	return 0 ;
	
}
