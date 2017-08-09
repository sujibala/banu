#include <stdio.h>

int main(void) {
	// your code goes here
	int s,q,num;
	scanf("%d %d",&s,&q);
	for(num=s;num<=q;num++)
	{
		if(num%2==0)
		printf("%d ",num);
	}
	return 0;
}
