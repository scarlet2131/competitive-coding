#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
        int p1[t],p2[t];
        int sum1=0,sum2=0;
        int i,j,k,max1=0,max2=0;
        for(i=0;i<t;i++)
        scanf("%d %d",&p1[i],&p2[i]);
        int d;
        for(i=0;i<t;i++)
        {
            sum1=sum1+p1[i];
            sum2=sum2+p2[i];
            if(sum1>sum2)
            {
            d=sum1-sum2;
            if(d>max1)
            {
                max1=d;
            }
            }
            if(sum2>sum1)
            {
            d=sum2-sum1;
            if(d>max2)
            {
                max2=d;
            }
        }
        }
        if(max1>max2)
        {
        printf("1 %d",max1);
        }
        else
        {
        printf("2 %d",max2);
        }
}


