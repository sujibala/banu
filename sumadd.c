#include<stdio.h>
int main()
{
    int n,count=0,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        count=count+i;
    }
    printf("count=%d",count);
    return 0;
}
