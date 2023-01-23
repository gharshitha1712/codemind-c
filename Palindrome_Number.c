#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int r,rv=0,a;
        scanf("%d",&a);
        int t=a;
        while(a!=0)
        {
            r=a%10;
            rv=rv*10+r;
            a=a/10;
        }
        if(rv==t)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}