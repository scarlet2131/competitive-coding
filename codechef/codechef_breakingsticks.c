#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],sum=0;
    long int fsum=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    int k=0;
    int d=2*sqrt(a[i]);
    int b[d];
    int t;
    t=a[i];
    for(j=a[i];j>=1;j--)
    {
        if(a[i]%j==0);
        {
            b[k++]=j;
            t=j;
        }
    }
    for(j=0;j<k;j++)
    {
        printf("%d\n",b[j]);
        sum=sum+b[j];
    }
    fsum=fsum+sum;
    }
    printf("%d",fsum);

}
