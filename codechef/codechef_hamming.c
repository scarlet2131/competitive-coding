#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,temp;
        scanf("%d",&n);
        int a[1000000];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        if(n%2==0)
        {
        for(i=0;i<n;i+=2)
        {
        temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }


        printf("%d\n",n);
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");


        }
        else
        {
            if(n==1)
            {
                printf("0\n");
                printf("%d\n",a[0]);
            }
            else
            {
            for(i=0;i<n-1;i+=2)
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
                temp=a[n-1];
                a[n-1]=a[0];
                a[0]=temp;
            printf("%d\n",n);
            for(i=0;i<n;i++)
            {
            printf("%d ",a[i]);
            }
            printf("\n");
            }


            }

    }
    }



