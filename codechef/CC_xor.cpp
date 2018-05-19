#include<iostream>
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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int g=0;
		for(int i=0;i<n;i++)
		{
			g=g^a[i];		
		}
		cout<<g*2;
		/*int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				b[k++]=a[i]+a[j];
			}
		}
		for(int m=0;m<k;m++)
			cout<<b[m];
		int f=0;
		for(int m=0;m<k;m++)
		{
			 f=f^b[m];
		}
		cout<<f;*/
		cout<<endl;


	}
}