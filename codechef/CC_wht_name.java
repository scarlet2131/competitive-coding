import java.io.BufferedReader;
import java.io.IOException;
import java.util.*;
import java.io.*;


public class CC_wht_name 
{
	public static void main(String[] args) throws IOException 
	{
		BufferedReader scan = new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(scan.readLine());
		while(t-->0)
		{
			String m[]=scan.readLine().split(" ");
			String n="";
			int k=0;
			if(m.length==1)
			{
				for(int i=0;i<m[0].length();i++)
				{

					if(i==0)
					{
						n=n+ Character.toUpperCase(m[0].charAt(0));
					}
					else
					{
						n=n+ Character.toLowerCase(m[0].charAt(i));
					}
				}
				System.out.println(n);
			}
			else
			{
			for(int i=0;i<m.length-1;i++)
			{
				n=n+ Character.toUpperCase(m[i].charAt(0));
				n=n+"."+" ";
			
			}
			for(int i=0;i<m[m.length-1].length();i++)
			{
				if(i==0)
				{
					n=n+ Character.toUpperCase(m[m.length-1].charAt(0));
				}
				else
				{
					n=n+ Character.toLowerCase(m[m.length-1].charAt(i));
				}
			}
			
			System.out.println(n);
		}
	}
	}
}

