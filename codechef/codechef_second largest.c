#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int s[3];
        int max=0,i;
        for(i=0;i<3;i++)
        {
            s[0]=a;
            s[1]=b;
            s[2]=c;
        }
        for(i=0;i<3;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
            }
        }
        for(i=0;i<3;i++)
        {
            if(max==s[i])
            {
                s[i]=0;
            }
        }
        max=0;
        for(i=0;i<3;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
            }
        }

        printf("%d\n",max);


    }
}
