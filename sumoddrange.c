#include<stdio.h>
int main()
{
    int n,sum=0,odd=0,j,i;
    for(i=1;i<=15;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    for(j=15;j<=45;j++)
    {
        if(j%2!=0)
        odd=odd+j;
    }
    printf("\n%d",odd);
    return 0;
}
