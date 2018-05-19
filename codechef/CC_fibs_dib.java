
import java.util.*;
import java.util.Scanner;
public class CC_fibs_dib 
{
public static void main(String[] args)
{
	Scanner scan= new Scanner(System.in);
	int t= scan.nextInt();
	while(t-->0)
	{
		int m=scan.nextInt();
		int n=scan.nextInt();
		long p=1000000000+7;
		long a[]=new long [m];
		for(int i=0;i<m;i++)
		{
			a[i]=scan.nextLong();
		}
		long b[]=new long [m];
		for(int j=0;j<m;j++)
		{
			b[j]=scan.nextLong();
		}
		long sum=0;
		long sum1=0;
		int size;
		long l;
		long ans;
		if(n==1)
		{
			size=2;
			 long c[]=new long[size]; 
			c[0]=0;
			c[1]=1;
			for(int i=2;i<size;i++)
			{
				c[i]=(c[i-1]+c[i-2])%p;
			}
			for(int i=0;i<m;i++)
			{
				sum=sum+a[i];
			}
			l=((sum%p)*(m%p))%p;
			ans=l%p;
			System.out.println(ans);
		}
		else
		{
			size=n;
			 long c[]=new long[size]; 
			c[0]=0;
			c[1]=1;
			for(int i=2;i<size;i++)
			{
				c[i]=(c[i-1]+c[i-2])%p;
			}
		for(int i=0;i<m;i++)
		{
			sum=sum+a[i];
		}
		for(int j=0;j<m;j++)
		{
			sum1=sum1+b[j];
		}
		l=((sum%p)*(m%p))%p;
		long k=((sum1%p)*(m%p))%p;
		 ans=((((k%p)*((c[n-1])%p))%p)+(((l%p)*((c[n-2])%p))%p))%p;
		
		System.out.println(ans);
		}
		
		
	}
	
}
}
