#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int min,max;
        if(a>b)
        {
            min=a;
        }
        else
        {
            min=b;
        }
        max=a+b;
        printf("%d %d\n",min,max);
    }
}
