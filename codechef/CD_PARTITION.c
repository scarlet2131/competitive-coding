#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n;
        scanf("%d %d",&x,&n);
        int a[n];
        int i;
        int k=0;
        for(i=1;i<=n;i++)
        {
        if(i!=x)
        {

            a[k++]=i;
        }
        }
        /*for(i=1;i<=n;i++)
        {
        printf("%d",a[i]);
        }*/
        char s1[n];
        char s2[n];
        int j,temp;

            for(i=0;i<n;i++)
            {
                sum=sum+a[i];
            }
            s1[0]=a[n-1];
            int sum1=0,sum2=0;
            if(sum%2==0)
            {
            for(i=1;i<n;i++)
            {
                sum1=sum1+s1[i];
                sum2=sum2+s2[i];
                if(sum1>sum2)
                {
                    s2[i]=a[i];
                    i++;
                }
                else
                {
                    s1[i]=a[i];
                    i++;
                }
                else if(sum1!=sum2)
                {
                    if(sum1>sum2)
                    {
                        s1[i]=s2[i];
                        s2[i]=s1[i];
                    }
                    else
                    {
                        s2[i]=s1[i];
                        s1[i]=s2[i];
                    }
                }
            }
            }
            else
            {
                printf("impossible");
            }
            for(i=0;i<n;i++)
            {
                if(a[i]==s1[i])
            }

    }
}
