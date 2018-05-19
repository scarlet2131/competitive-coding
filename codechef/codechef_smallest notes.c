#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        int a[6];
        long int i,q;
        int sum=0;
            a[0]=1;
            a[1]=2;
            a[2]=5;
            a[3]=10;
            a[4]=50;
            a[5]=100;
        while(n>0)
        {
           for(i=6;i>=0;i--)
           {
           if(n>=a[i])
           break;
           }
           q=n/a[i];
           n=n-a[i]*q;
           sum=sum+q;

        }
        printf("%d\n",sum);
    }
}
