package taka;

import java.io.*;

public class john1 {

	public static void main(String[] args)  throws IOException {
		// TODO Auto-generated method stub
		System.out.print("½Ð¿é¤JÀÉ¦W");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String filename = br.readLine();
		BufferedWriter bw = new BufferedWriter(new FileWriter(filename));
		
	
		String ch = new String();
		int a,b,c=0;
		for(a=1;a<=9;a++ )
		{
			for(b=1;b<=9;b++)
			{
			
				ch = a + "x"+ b + "="+ a*b;
				bw.write(ch,0,ch.length());
				
				bw.newLine();
			}
			
			
		}
		bw.flush();
		bw.close();
		

		String str = new String();
		BufferedReader bfr = new BufferedReader(new FileReader(filename));
		while((str = bfr.readLine()) != null) 
			System.out.println(str);
		bfr.close();

	}

}
