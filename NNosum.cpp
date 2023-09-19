#include <stdio.h>

int main()
{
	int n ;
	printf("enter number");
	scanf("%d",&n);
	int i,s = 0 ;
	while (i<= n)
	{
		i=i+1;
		s=s+i;
		
	}
	printf("SUM = %d",s);
	return 0 ;
}
	
