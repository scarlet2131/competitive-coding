import java.util.Scanner;


public class CC_periodic 
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int t=scan.nextInt();
		while(t-->0)
		{
			int n=scan.nextInt();
			int p=scan.nextInt();
			if(n%p!=0 || p<=2)
			{
				System.out.println("impossible");
			}
			else
			{
				String z="";
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
				String s="";
				for(int i=0;i<n/p;i++)
				{
					s=s+z;
				}
				System.out.println(s);
			}
			
		}	
	}
}
