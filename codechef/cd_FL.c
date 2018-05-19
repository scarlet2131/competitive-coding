#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,rem;
        int j=0;
        scanf("%d",&n);
        int sum=0;
        int a[10];
        while(n>0)
        {
            int rem=n%10;
            a[j++]=rem;
            n=n/10;

        }
        sum=a[0]+a[j-1];
        printf("%d\n",sum);
    }
}
