#include<stdio.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long int f=5,sum=0;
        while(1)
        {
            sum=sum+n/f;
            f=f*5;
            if(n/f==0)
            {
                break;
            }
        }
         printf("%ld\n",sum);
         }
}
