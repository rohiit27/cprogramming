#include <stdio.h>
#include <math.h>

int main()
{
	float p,r,t,si,ci,v;
	printf("enter principal amount:");
	scanf("%f",&p);
	printf("enter rate of interest:");
	scanf("%f",&r);
	printf("enter time period:");
	scanf("%f",&t);
	si=(p*r*t)/100 ;
	v=(1+(r/100));
	ci=(p*pow(v,t))-p;
	printf("simple interest:%f \n compound interest:%f",si,ci);
	return 0 ;

}
