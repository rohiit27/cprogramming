#include <stdio.h>
int main()
{
	int d,m,y;
	printf("enter  date,month and year");
	scanf("%d" "%d" "%d",&d,&m,&y); 
	if ((m==1) || (m==3)|| (m==5) || (m==7) || (m==8) || (m==10) || (m==12))
	{
		if ((d==0) || (d>31))
		printf("INVALID");
		if ((d==31)&&(m!=12))
		{
			d=1;
			m=m+1;
			printf("%d "  "%d "  "%d",d,m,y);
		}
		else if ((d==31)&&(m==12))
		{
			d=1;
			m=1;
			y=y+1;
			printf("%d "  "%d "  "%d",d,m,y);
		}
		else
		{
			d=d+1;
			printf("%d "  "%d "  "%d",d,m,y);
		} 
	}
	else if (m=2)
	{
		if ((y%4==0) && (y%100!=0 || y%400==0))
		{
			if ((d==0) || (d>29))
			printf("INVALID");
			else if (d==28)
			{
				d=29;
				printf("%d "  "%d "  "%d",d,m,y);
			} 
			else if (d==29)
			{
				d=1;
				m=3;
				printf("%d "  "%d "  "%d",d,m,y);
			}
			else 
			d=d+1;
			printf("%d "  "%d "  "%d",d,m,y);	
		}
		else
		{
			if ((d==0) || (d>28))
			printf("INVALID");
			else if (d==28)
			{
				d=1;
				m=3;
				printf("%d "  "%d "  "%d",d,m,y);
			}
			else
			{
				d=d+1;
				printf("%d "  "%d "  "%d",d,m,y);
			}
		}
	}
	else if ((m==4) || (m==6)|| (m==9) || (m==11))
	{
		if ((d==0) || (d>30))
		printf("INVALID");
		else if (d==31)
		{
			d=1;
			m=m+1;
			printf("%d "  "%d "  "%d",d,m,y);
		}
		else 
		{
			d=d+1;
			printf("%d "  "%d "  "%d",d,m,y);
		}
	}
	
}
