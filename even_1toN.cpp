#include <stdio.h>

int main()
{
	int n ;
	printf("enter number");
	scanf("%d",&n);
	int i = 2 ;
	while (i<=n)
	{
		printf("%d\n",i);
		i=i+2 ;
	} 
	return 0 ;
}
