#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        int rem;
        scanf("%d",&n);
        while(n>0)
        {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        }
        printf("%d\n",sum);
    }

}
