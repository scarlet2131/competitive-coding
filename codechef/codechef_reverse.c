#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int rem;
        int a[10];
        int j,k=0,i;
        while(n>0)
        {
        rem=n%10;
        n=n/10;
        a[k++]=rem;
        }
        for(i=0;i<k;i++)
        {
            if(a[i]!=0)
            {
                break;
            }

        }
        for(j=i;j<k;j++)
        {
        printf("%d",a[j]);
        }
        printf("\n");
}
}


