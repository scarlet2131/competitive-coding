#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int b=1,c=0;
		int sum1=0;
		int sum2=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int m[n];
		int max;
		int t[n];
		int flag=0;
		m[0]=a[0];
		for(int i=1;i<n;i++)
		{
			if(i%2==0)
			{
				m[b++]=a[i];
			}
			else
			{
				t[c++]=a[i];
			}
		}
		for(int f=0;f<b;f++)
			{
				sum1=sum1+m[f];
			}
			for(int e=0;e<c;e++)
			{
				sum2=sum2+t[e];
			}
			if(sum2>sum1)
			{
				flag=1;
			}
		/*for(int j=0;j<b;j++)
			cout<<m[j];
		for(int f=0;f<c;f++)
			cout<<t[f];*/
		sort(m,m+b);
		sort(t,t+c);
		 int g=0,h=b-1;
		 if(flag==0)
		 {
			while(k>0)
		{
			 if(g<c && h>=0)            
                {
                    long int temp = t[g];
                    t[g] = m[h];
                    m[h] = temp;

                    g++;
                    h--;
                }

				sum1=0;
				sum2=0;
			for(int f=0;f<b;f++)
			{
				sum1=sum1+m[f];
			}
			for(int e=0;e<c;e++)
			{
				sum2=sum2+t[e];
			}
			if(sum2>sum1)
			{
				flag=1;
				break;
			}
			
				/*for(int g=b;g>0;g--)
				{
					for(int h=0;h<c;h++)
					{
						swap(t[j],m[g]);
						k--;
					}
				
			}*/
				 
			
			k--;
		}
	}
		if(flag==1)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
}