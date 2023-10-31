#include <stdio.h>

int main()
{
	int n,k;
	printf("enter no. of elements in array:");
	scanf("%d",&n);
	int a[n],t=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter kth no");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if ((a[j]>a[j+1]) && (j+1!=n))
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
    printf("%d largest element in array:%d\n",k,a[n-k]);
    printf("%d smallest in array:%d",k,a[k-1]);
    return 0 ;
	

}
