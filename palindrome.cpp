#include <stdio.h>
#include <math.h>

int main()
{
	int n,l,r,m,t,o ;
	printf("enter number");
	scanf("%d",&n);
	l=0;
	r=0;
	o=n;
	m=n;
	while (n>0)
	{
		l=l+1;
		n=n/10 ;
	}
	l=l-1;
	while (l>=0)
	{
		t=m%10;
		r=r+t*pow(10,l);
		m=m/10;
		l=l-1;
	}
	if (o==r) printf("this numbeer is palindrome");
	else printf("this numbeer is not palindrome");
	
}
