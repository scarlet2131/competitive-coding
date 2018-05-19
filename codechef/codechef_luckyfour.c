#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        int rem;
        while(n>0)
        {
        rem=n%10;
        n=n/10;
        if(rem==4)
        {
            count++;
        }
        }
        printf("%d\n",count);
    }
}
