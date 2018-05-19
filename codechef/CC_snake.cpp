#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	while(s--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int flag=0;
		int flag1=0;
		int flag2=0;
		
		if(a[0]==a[n-1] && a[0]==1)
		{
			flag=1;
		}
		for(int i=0;i<n/2;i++)
		{
			if((a[i+1]-a[i])!=1)
			{
				flag1=1;
			}
		}
		for(int j=n/2;j<n-1;j++)
		{
			if((a[j]-a[j+1])!=1)
			{
				flag2=1;
			}
		}

		if(flag==1 && flag1==0 && flag2==0)
		{
			cout<<"yes";
		}
		else
		{
			cout<<"no";
		}
		cout<<endl;
	}
}