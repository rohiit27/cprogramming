#include <stdio.h>

int main()
{
	int n;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int min=a[0],max=a[0],m=0 ;
	int avg;
	for(int i=0;i<n;i++)
	{
		m=m+a[i];
	
		if (max<a[i]) max=a[i] ;
		if (min>a[i]) min=a[i] ;
		
	}
	avg=m/n;
	printf("min=%d max=%d avg=%d",min,max,avg);
	
	
	
	
	
}
