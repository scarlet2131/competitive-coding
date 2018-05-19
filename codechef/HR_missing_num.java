
import java.util.Arrays;
import java.util.Scanner;

public class  HR_missing_num
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
			int n=scan.nextInt();
			int a[]=new int [n];
			for(int i=0;i<n;i++)
			{
				a[i]=scan.nextInt();
			}
			int m= scan.nextInt();
			int b[]= new int [m];
			for(int j=0;j<m;j++)
			{
				b[j]=scan.nextInt();
			}
			int c[]=new int [200001];
			int d[]=new int [200001];
			int e[]=new int [200001];
			int v=0;
			for(int k=0;k<n;k++)
			{
				c[a[k]]++;
			}
			for(int g=0;g<m;g++)
			{
				d[b[g]]++;
			}
			for(int i=0;i<d.length;i++)
					{
						if(d[i]!=c[i])
							{
								e[v++]=i;
							}
					}
				
			
			
			for(int x=0;x<v;x++)
			{
			System.out.print(e[x]);
			System.out.print(" ");
			}
			
			}
		
	
}

