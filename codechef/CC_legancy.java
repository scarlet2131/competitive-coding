import java.util.Scanner;
public class CC_legancy 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t= scan.nextInt();
		while(t-->0)
		{
			int n=scan.nextInt();
			long  c=scan.nextLong();
			long a[]=new long [n];
			for(int i=0;i<n;i++)
			{
				a[i]=scan.nextLong();
			}
			long  sum=0;
			for(int j=0;j<n;j++)
			{
				sum=sum+a[j];
			}
			if(sum>c)
			{
				System.out.println("No");
			}
			else
			{
				System.out.println("Yes");
			}
		}
		
	}


}





	