import java.util.Scanner;


public class CC_temple_land 
{
	
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int s=scan.nextInt();
		while(s-->0)
		{
			int n=scan.nextInt();
			int a[] = new int [n];
			for(int i=0;i<n;i++)
			{
			 a[i]=scan.nextInt();
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
				System.out.println("yes");
			}
			else
			{
				System.out.println("no");
			}
			System.out.println();
		}
	
	}

}
