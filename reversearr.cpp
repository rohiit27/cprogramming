#include <stdio.h>

int main()
{
	int n;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n],t=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int k = n-1 ;
	for(int i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[k];
		a[k]=t;
		k=k-1;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
	return 0 ;
}
	
	
	
