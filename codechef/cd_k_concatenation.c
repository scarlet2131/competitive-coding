#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
{
    int n,k,i,j,s=0;
    scanf("%d %d",&n,&k);
    int sum,max;
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=n*k;
    int b[l];
    for(j=0;j<l;j++)
    {
    for(i=0;i<n;i++)
    {
        b[s++]=a[i];
    }
    }
    for(j=0;j<l-1;j++)
    {
        for(i=j+1;i<l;i++)
        {
            sum=a[i]+a[j];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    printf("%d\n",sum);
}
}
