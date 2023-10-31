#include <stdio.h>

int main()
{
	int n;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n],t=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i=i+2)
	{
	
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
    }
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0 ;
	
}
