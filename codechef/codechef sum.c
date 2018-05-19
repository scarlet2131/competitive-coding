#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
        int p1[t],p2[t];
        int sum[t];
        int i;
        for(i=0;i<t;i++)
        scanf("%d %d",&p1[i],&p2[i]);
        for(i=0;i<t;i++)
        {
            sum[i]=p1[i]+p2[i];
        }
        for(i=0;i<t;i++)
        printf("%d\n",sum[i]);
}
