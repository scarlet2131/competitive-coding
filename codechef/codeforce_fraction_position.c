#include<stdio.h>
int main()
{
    double a,b;
    int c,flag=0;
    scanf("%f %f %d",&a,&b,&c);
    int rem,i=0,f=10;
    double d=a/b;
    while(d>0)
    {
        int k=(d*f);
        rem=k%10;
        printf("%d ",rem);
        if(rem!=c)
        {
          i++;
        }
        f=f*10;
        if(rem==c)
        {
            printf("%d\n",i+1);
            flag=1;
            break;
        }
        }
        if(flag==0)
        {
            printf("-1\n");
        }
        }



