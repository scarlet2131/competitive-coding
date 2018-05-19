import java.util.Arrays;
import java.util.Scanner;


public class CC_lapindromes 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t=scan.nextInt();
		while(t-->0)
		{
			String m=scan.next();
			int l=m.length();
			int a[]= new int [26];
			int b[]= new int [26];
			if(l%2==0)
			{
				for(int i=0;i<l/2;i++)
				{
					a[(m.charAt(i)%97)]++; //this mean that char at i will become 1 nd else 0
				}
				for(int j=l/2;j<l;j++)
				{
					b[m.charAt(j)%97]++;
				}
			}
			else
			{
				for(int q=0;q<l/2;q++)
				{
					a[m.charAt(q)%97]++;
				}
				for(int s=l/2+1;s<l;s++)
				{
					b[m.charAt(s)%97]++;
				}
			}
			if(Arrays.equals(a,b))
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
		}
		
	}
}