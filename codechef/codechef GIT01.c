#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int i,j=0,cost=0;
        char a[1000][1000];
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        int mincost=0;
        char s1[1000];
        char s2[1000];
          for(i=0;i<m;i++)
          {
            if(i%2==0)
            {
                s1[j++]='R';
            }
            else
            {
                s1[j++]='G';
            }
            }
            s1[j]='\0';
             j=0;
             for(i=0;i<m;i++)
            {
               if(i%2==0)
              {
                s2[j++]='G';
              }
              else
              {
                s2[j++]='R';
              }
            }
            s2[j]='\0';
            for(i=0;i<n;i++)
            {
            if(i%2==0)
            {
            for(j=0;j<m;j++)
            {
            if(a[i][j]!=s1[j])
            {
                if(a[i][j]=='R')
                {
                    cost=cost+5;
                }
                else
                {
                    cost=cost+3;
                }
            }

            }
            }
            else
            {
               for(j=0;j<m;j++)
            {
            if(a[i][j]!=s2[j])
            {
                if(a[i][j]=='R')
                {
                    cost=cost+5;
                }
                else
                {
                    cost=cost+3;
                }
            }

            }
            }
            }
            int cost2=0;
            for(i=0;i<n;i++)
            {
            if(i%2==0)
            {
            for(j=0;j<m;j++)
            {
            if(a[i][j]!=s2[j])
            {
                if(a[i][j]=='R')
                {
                    cost2=cost2+5;
                }
                else
                {
                    cost2=cost2+3;
                }
            }

            }
            }
            else
            {
               for(j=0;j<m;j++)
               {
            if(a[i][j]!=s1[j])
            {
                if(a[i][j]=='R')
                {
                    cost2=cost2+5;
                }
                else
                {
                    cost2=cost2+3;
                }
            }

            }
            }
            }
            if(cost>=cost2)
            {
                mincost=cost2;
            }
            else
            {
                mincost=cost;
            }


       printf("%d\n",mincost);
       }
       }
