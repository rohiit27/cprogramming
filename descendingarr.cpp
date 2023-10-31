#include <stdio.h>

int main()
{
	int n;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n],t=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if ((a[j]<a[j+1]) && (j+1!=n))
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0 ;

}
