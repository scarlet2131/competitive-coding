#include<iostream>
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
		for(int i=0;i<n;i++)
			cin>>a[i];
		int m[100];
		int t[100];
		int s=0,b=0;
		int sum1=0,sum2=0;
		int min=-9999;
		m[0]=a[0];
		for(int i=1;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]!=-222 || a[j]!=-222)
				{
				if(a[i]>a[j])
				{
					min=a[j];
					a[j]=-222;
				}
				}
			}
		}
		int	c=1;
			t[0]=min;
			c++;	
			if(c%2==0)
			{
				m[s++]=min;
				c++;
			}
			else
			{
				t[b++]=min;
				c++;
			}

		for(int i=0;i<s;i++)
		{
			sum1=sum1+m[i];
		}
		for(int j=0;j<b;j++)
		{
			sum2=sum2+t[j];
		}
		if(sum1>=sum2)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}

	}
}