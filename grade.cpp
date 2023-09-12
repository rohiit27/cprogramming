#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	printf("enter marks obtained in phy,chem,bio,mathd,comp :");
	scanf("%d" "%d" "%d" "%d" "%d",&a,&b,&c,&d,&e);
	float p=(a+b+c+d+e)/5 ;
	printf("percentage= %f ",p);
	if (p>= 90) printf("grade obtained: A");
	else if (p>= 80) printf("grade obtained: B");
	else if (p>= 60) printf("grade obtained: C");
	else if (p>= 50) printf("grade obtained: D");
	else if (p>= 40) printf("grade obtained: E");
	else printf("grade obtained: F");
	return 0 ;
}
