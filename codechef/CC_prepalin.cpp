#include<iostream>
#include<string>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		if(n%p!=0 || p<=2 ||n<=2 || p>n)
		{
			cout<<"impossible"<<endl;
		}
		else
			{
				string z;
				for(int i=0;i<p;i++)
				{
					if(i==0 || i==p-1)
					{
					z=z+'a';
					}
					else
					{
					z=z+'b';
					}
					
				}
				string s;
				for(int i=0;i<n/p;i++)
				{
					s=s+z;
				}
				cout<<s<<endl;

			}
	}
}