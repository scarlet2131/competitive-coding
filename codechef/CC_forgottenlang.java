import java.util.Scanner;


public class CC_forgottenlang
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t= scan.nextInt();
		while(t-->0)
		{
			int n=scan.nextInt();
			int k=scan.nextInt();
			String m[]=new String[n];
			String v[]=new String[1000];
			int flag;
			for(int i=0;i<n;i++)
			{
				m[i]=scan.next();
			}
			int o=0;
			int p=0;
			while(k-->0)
			{
				p=scan.nextInt();
				String q[]=new String[p];
				for(int j=0;j<p;j++)
				{
					q[j]=scan.next();

				}
				for(int i=0;i<p;i++)
				{
					v[o++]=q[i];
				}
						
			 }
			for(int r=0;r<n;r++)
			{
				flag=0;
				for(int j=0;j<o;j++)
				{
				
					if(m[r].equals(v[j]))
					{
						flag=1;
						break;
					}
				}
			if(flag==1)
			{
				System.out.print("YES "+"");
			}
			else
			{
				System.out.print("NO "+"");
			}
			}
		System.out.println();	
		}
	}
}
