#include<stdio.h>
int main()
{
    long int n,count=0;
    scanf("%ld",&n);
    while(n>0)
    {
        n=n/10;
        ++count;
    }
    printf("number of digits:%ld",count);
    return 0;
}
    
