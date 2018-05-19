import java.util.Scanner;


public class CC_viiltribe 
{
	public static void main(String[] args)
	{
	Scanner scan= new Scanner(System.in);
	int t= scan.nextInt();
	while(t-->0)
	{
		String m= scan.next();
		String a[] = new String [1000];
		
		int k=0;
		
		int g=0;
		
		for(int i=0;i<m.length();i++)
		{
			a[k++]=m;
		}
		int d=0;
		for(int j=0;j<k;j++)
		{
			if(a[j]=="A" && a[j+1]==".")
			{
				d++;
			}
		}
		System.out.println(d);
		System.out.println(g);
	}
	}
}
