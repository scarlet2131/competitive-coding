import java.util.Arrays;
import java.util.Scanner;

public class sort_name_bucket 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t=scan.nextInt();
		while(t-->0)
		{
			String m= scan.next();
			int a[]=new int [26];
			int b[]=new int [m.length()];
			char c[]= new char[m.length()];
			int k=0;
			int n=0;
			for(int i=0;i<m.length();i++)
			{
				a[m.charAt(i)%97]++;
				
			}
			for(int x=0;x<26;x++)
			{
				if(a[x]!=0)
				{
					for(int f=0;f<a[x];f++)
					{
					b[k++]=x;
					}
				}
			}
			Arrays.sort(b);
			for(int j=0;j<k;j++)
			{
				b[j]=97+b[j];
				char ch=(char)(b[j]);
				System.out.print(ch);
			}
			
		}
	}
}
