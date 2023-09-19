#include <stdio.h>
#include <math.h>

int main()
{
	int n,m,l,r,f,s ;
	printf("enter number");
	scanf("%d",&n);
	l=0;
	r=0;
	m=n;
	while (n>0)
	{
		l=l+1;
		n=n/10 ;
	}
	l=l-1;
	f=m%10;
	s=m/(pow(10,l));
	int sum=f+s ;
	printf("sum of first and :%d",sum);
}
	
	

