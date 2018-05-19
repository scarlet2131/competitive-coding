#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n;
        cin>>h;
        int a[n];
        int max=0;
        int k=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        //cout<<max;
        for(int i=1;i<=max;i++)
        {
            sum = 0;
            for(int j=0;j<n;j++)
            {
                sum=sum+ceil((double)a[j]/(double)i);
                /*cout<<ceil(a[j]/i)<<" ";
               // cout<<sum<<" ";
               // cout<<endl;*/

            }
            /*cout<<endl;*/
            if(sum<=h)
                {
                   cout<<i;
                   break;
                }
        }
        cout<<endl;

    }
}
