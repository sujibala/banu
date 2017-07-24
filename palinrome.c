#include<stdio.h>
int main()
{
	int n,r=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=r*10;
		r=r+temp%10;
		temp=temp/10;
		
	}
	if(r==n)
	printf("palinrome");
	else
	printf("not a palinrome");
	return 0;
}
