import java.util.Scanner;


public class CC_rainbow 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t= scan.nextInt();
		while(t-->0)
		{
			int n= scan.nextInt();
			int a[]= new int [n];
			for(int i=0;i<n;i++)
			{
				a[i]=scan.nextInt();
			}
			int[] b={1,2,3,4,5,6,7,6,5,4,3,2,1};
			int c[]= new int [n];
			int k=1;
			int flag=0;
			int flag1=0;
			c[0]=a[0];
			for(int j=1;j<n;j++)
			{
				if(a[j]!=c[k-1])
				{
					c[k++]=a[j];
				}
				
			}
			for(int i=0;i<n;i++)
			{
				if(a[i]!=a[n-i-1])
				{
					flag=1;
					break;
				}
			}
			if(k!=b.length)
			{
				flag1=1;
			}
			else
			{
			
			for(int j=0;j<k;j++)
			{
				if(c[j]!=b[j])
				{
					flag1=1;
					break;
				}
			}
			}
			if(flag==0 && flag1==0)
			{
				System.out.println("yes");
			}
			else
			{
				System.out.println("no");

			}
		}
		
	}
}
