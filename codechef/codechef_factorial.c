#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,f=1,i;
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            f=f*i;
        }
        printf("%d\n",f);
    }
}
