#include <stdio.h>

int main()
{
	int n ;
	printf("enter number");
	scanf("%d",&n);
	int i=1 ;
	int s=1 ;
	while(i<=n)
	{
		s=i*s;
		i=i+1;
	}
	printf("THE FAACTORIAL OF NUMBER:%d",s);
	return 0;
}
	
	
