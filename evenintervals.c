#include<stdio.h>
int main(){
	int m,n,num;
	scanf("%d %d",&m,&n);
	for(num=m;num<=n;num++)
	{
		if(num%2==0)
		printf("%d ",num);
	}
	return 0;
}
