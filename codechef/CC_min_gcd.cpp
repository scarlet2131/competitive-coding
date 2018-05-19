#include<iostream>
using namespace std;
    
    int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int flag=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l=gcd(a[0],a[1]);
		for(int i=2;i<n;i++)
		{
			 l=gcd(l,a[i]);

		}
		if(l==1)
		{
			cout<<"0";
		}
		else
		{
			cout<<"-1";
		}
		cout<<endl;
	}
}