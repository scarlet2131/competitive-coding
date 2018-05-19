#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;
int binsearch(long int start,long int fin,long int a[],int n,long int h)
{
long int k;
    while(start<=fin)
    {
     long int mid=(start+fin)/2;
     long int sum=0;
     for(int i=0;i<n;i++)
     {
        sum=sum + ceil((double)a[i]/(double)mid);
     }
        if(sum<=h)
        {
            k=mid;
            fin=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return k;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int h;
        cin>>n;
        cin>>h;
       long  int a[n];
        long int max=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //cout<<max;
        sort(a,a+n);
        long int ans= binsearch(1,a[n-1],a,n,h);
        cout<<ans;
        cout<<endl;

        }
        }
