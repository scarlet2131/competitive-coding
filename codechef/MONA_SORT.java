import java.util.Arrays;
import java.util.Scanner;


public class MONA_SORT 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int t= scan.nextInt();
		while(t-->0)
		{
			String m =scan.next();
			char a[]= new char[m.length()];
			int k=0;
			for(int i=0;i<m.length();i++)
			{
				a[k++]=m.charAt(i);
			}
			for(int i=0;i<k;i++)
			{
				Arrays.sort(a);
			}
			for(int j=0;j<k;j++)
			{
				System.out.print(a[j]);
			}
			System.out.println();
		}
	}
}
