#include <stdio.h>
int main()
{
	int a,b;
	printf("enter  year and month");
	scanf("%d" "%d",&a,&b); 
	if ((b==1) || (b==3)|| (b==5) || (b==7) || (b==8) || (b==10) || (b==12))
	printf("no of days=31");
	else if (b=2)
	{
		if ((a%4==0) && (a%100!=0 || a%400==0)) 
		printf("no of days=29");
		else 
		printf("no of days=28");
	}
	else 
	printf("no of days=30");
	return 0;
}
	
	 
