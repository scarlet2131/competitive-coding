#include<stdio.h>
int main()
{
    while(1)
    {
        int n,i;
        int flag=0;
        scanf("%d",&n);
        if(n==0)
        {
        break;
        }
        int a[n];
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        int b[n];
        for(i=1;i<=n;i++)
        {
          b[a[i]]=i;
        }
        //for(i=1;i<=n;i++)
        //printf("%d ",b[i]);//
        for(i=1;i<=n;i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("not ambiguous\n");
        }
        else
        {
            printf("ambiguous\n");
        }

        }
    }

