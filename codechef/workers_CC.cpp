#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long int m=0;
	long int k=0;
	long int l=0;
	long int sum=100000;
	long int a[n];
	long int b[n];
	long int d[n];
	long int c[n];
	for(int i=0;i<n;i++)
		cin>>c[i];
	long int t[n];
	for(int j=0;j<n;j++)
		cin>>t[j];

	for(int i=0;i<n;i++)
	{
		a[i]=100000;
		b[i]=100000;
		d[i]=100000;
	}
	for(int i=0;i<n;i++)
	{
		if(t[i]==1)
		{
			a[m++]=c[i];
		}
		else if(t[i]==2)
		{
			b[k++]=c[i];
		}
		else if(t[i]==3)
		{
			d[l++]=c[i];
		}
	}
	sort(a,a+m);
	sort(b,b+k);
	sort(d,d+l);
	/*for(int i=0;i<m;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	for(int i=0;i<k;i++)
		cout<<b[i]<<" ";
	cout<<endl;

	for(int i=0;i<l;i++)
		cout<<d[i]<<" ";
	cout<<endl;*/
	
		sum=a[0]+b[0];
		if(d[0]<sum)
		{
			cout<<d[0];
		}
		else
		{
			cout<<sum;
		}
	
	cout<<endl;
}
