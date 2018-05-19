#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,rem;
        scanf("%d",&n);
        int a[10];
        int sum=0,j=0;
        while(n>0)
        {
            rem=n%10;
            a[j++]=rem;
            n=n/10;
        }
            sum=a[0]+a[j-1];
            printf("%d\n",sum);


    }
}
