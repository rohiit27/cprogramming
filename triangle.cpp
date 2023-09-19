#include <stdio.h>
int main()
{
	int a,b,c ;
	printf("enter length of  three sides");
	scanf("%d" "%d" "%d",&a,&b,&c);
	if ((a==b) && (a==c))
	printf(" the triangle is equilateral");
	else if ((a==b)&& (b!=c) && (c!=a))
	printf(" the triangle is isoceles");
	else if ((a!=b)&& (b==c) && (c!=a))
	printf(" the triangle is isoceles");
	else if ((a!=b)&& (b!=c) && (c==a))
	printf(" the triangle is isoceles");
	else 
	printf(" the triangle is scalene");	
	return 0;
}
