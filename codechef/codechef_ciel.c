#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[12],sum=0,count=0;
        for(i=1;i<13;i++)
        {
            a[i]=pow(2,i-1);
        }
        for(i=1;i<13;i++)
        while(n>0)
        {
        for(i=12;i>=1;i--)
        {
            if(n>=a[i])
            {
                break;
            }
        }
            n=n-a[i];
            count++;
        }
        printf("%d\n",count);

        }
        }
