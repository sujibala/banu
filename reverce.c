#include<stdio.h>
int main()
{
	int n,rn=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rn=rn*10+r;
		n=n/10;
	}
	printf("%d",rn);
	return 0;
}
