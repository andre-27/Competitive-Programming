#include <stdio.h>
int main()
{
	int a,b,c,d,num,den;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a*b<c*d)
	{
		if(c<d)
		{
			if(c%d)
		}
     	num=c*d-a*b;
		den=c*d;

	}
	else if(a*b>c*d)
	{
		p=(a*b)%(c*d);
		if(p==0)
			p=c*d;
		a*b=(a*b)/p;
		c*d=(c*d)/p;

		num=a*b-c*d;
		den=a*b;

	}
	else
		printf("0/1");
}