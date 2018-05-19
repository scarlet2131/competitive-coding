#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int k=0;
		for(int i=0;i<n;i++)
				cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
				cout<<a[i]<<endl;

		for(int i=n-1;i>0;i--)
		{
			b[k++]=a[i];
		}
		for(int i=0;i<n;i++)
				cout<<b[i]<<endl;

		for(int l=0;l<n-1;l++)
		{
			for(int j=l+1;j<n;j++)
			{
				if(b[l]%b[j]==0)
				{
					b[l]=-1;
				}
			}
		}
		for(int m=0;m<n;m++)
				cout<<b[m]<<endl;

	}
}