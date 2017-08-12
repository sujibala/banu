#include <stdio.h>

int main() {
	
	int n,sum=0,temp,r;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		temp=n/10;
	}
	if(sum==n)
	printf("armstrong number");
	else
	printf("not an armstrong number");
	return 0;
}
