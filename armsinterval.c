#include <stdio.h>

int main() {
	
	int n1,n2,sum=0,temp,r,i;
	scanf("%d %d",&n1,&n2);
	for(i=n1+1;n1<n2;i++)
	{
		temp=i;
		sum=0;
	
	    while(temp!=0)
	   {
		r=i%10;
		sum=sum+(r*r*r);
		temp=i/10;
     	}
	if(sum==i)
	{
		printf("%d",i);
	}
	return 0;
}
}
