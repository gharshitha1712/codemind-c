#include<stdio.h>
int main()
{
    int n,f,s=0,q,d,i;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        d=n%10;
        f=1;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
        n=n/10;
        s=s+f;
    }
    if(s==q)
    {
        printf("The number %d is a strong number",q);
    }
    else
    {
        printf("The number %d is not a strong number",q);
    }
}