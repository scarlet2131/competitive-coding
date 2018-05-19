#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int room,rem,sum1=0,sum2=0;
        int a[n][n];
        int sum=0;
         for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                room=i+j;
        sum1=0;
        sum2=0;
        while(room>0)
        {
            rem=room%10;
        if(rem%2==0)
        {
            sum1=sum1+rem;
        }
        else
        {
            sum2=sum2+rem;
        }
        room=room/10;
        }
        sum=abs(sum1-sum2)+sum;
        }
        }
        printf("%d\n",sum);
}
}


