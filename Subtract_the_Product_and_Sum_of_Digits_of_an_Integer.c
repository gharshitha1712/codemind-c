#include<stdio.h>
int main()
{
    int n,diff,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        product*=n%10;
        diff=product-sum;
        n/=10;
    }
    printf("%d",diff);
}