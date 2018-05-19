#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    while(scanf("%s",a)!=EOF)
    {
        scanf("%s",a);
        int flag=0,i,j1=0,j2=0;
        char a1[11];
        char a2[11];
        int count=0;
        int count2=0;
        for(i=0;i<20;i++)
        {
            if(i%2==0)
            {
                a1[j1++]=a[i];
            }
            else
            {
                a2[j2++]=a[i];
            }
            }
            a1[j1]='\0';
            a2[j2]='\0';
            for(i=0;i<5;i++)
            {
            if(a1[i]=='1')
            {
                count++;
            }
            if(a2[i]=='1')
            {
                count2++;
            }
            }

            if(count==count2)
            {
                for(i=5;i<10;i++)
                {
                  if(a1[i]!=a2[i])
                  {
                    flag=1;
                    if(a1[i]=='1')
                    {
                        printf("TEAM-A %d\n",2*(i+1));
                    }
                    if(a2[i]=='1')
                    {
                        printf("TEAM-B %d\n",2*(i+1));
                    }
                    break;
                  }

                  }
                    if(flag==0)
                    {
                        printf("TIE\n");
                    }

                    }
                    }
}
