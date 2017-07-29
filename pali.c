#include <stdio.h>

int main(void) {
	int n,r,reverce=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		reverce=reverce*10+r;
		n=n/10;
	}
	if(temp==reverce)
	printf("number is palinrome");
	else
	printf("not a palinrome");
	return 0;
}
