#include <stdio.h>

int main()
{
	int a,m,cm,mm;
	printf("enter distance in kilometres:");
	scanf("%d",&a);
	m=a*1000;
	cm=m*100;
	mm=cm*10;
	printf("distance in metres:%d",m);
	printf("\ndistance in centimetres:%d",cm);
	printf("\ndistance in milimetres:%d",mm);
	return 0;
}
	
	
