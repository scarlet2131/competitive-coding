#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int a[m];
		int b[m];
		long int p=1000000000+7;
		long int fib[n];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<m;j++)
		{
			cin>>b[j];
		}
		int sum=0;
		long int k;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				fib[0]=a[i];
				fib[1]=b[j];
				for(int l=2;l<n;l++)
				{
					fib[l]=(fib[l-1]+fib[l-2])%p;
				}
				k=fib[n-1];
				sum=(sum+k)%p;
			}
		}
		cout<<sum;
		cout<<endl;

	}
}