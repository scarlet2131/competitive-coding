import java.util.Arrays;
import java.util.*;
import java.util.Scanner;


public class CC_cops
 
{
	public static void main(String[] args)
	{
		Scanner scan= new Scanner(System.in);
		int s=scan.nextInt();
		while(s-->0)
		{
			int m= scan.nextInt();
			int x=scan.nextInt();
			int y=scan.nextInt();
			int a[] = new int [m];
			for(int i=0;i<m;i++)
			{
				a[i]=scan.nextInt();
			}
			int b=x*y;
			int flag=0;
			Arrays.sort(a);
			int count=0;
			int c[]=new int [101];
			for(int i=0;i<m;i++)
			{
				int start=a[i]-b;
				int end= a[i]+b;
				if(start<=0)
				{
					start=1;
				}
				if(end>100)
				{
					end=100;
				}
				for(int j=start;j<=end;j++)
				{
					c[j]=1;
				}
			}
			for(int k=1;k<=100;k++)
			{
				if(c[k]==0)
				{
					count++;
				}
			}
			System.out.println(count);
			
			
		}
		
	}
}

