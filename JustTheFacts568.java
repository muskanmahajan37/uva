
//Status : AC
import java.util.*;
import java.math.*;

public class JustTheFacts568{

	public static char fact(int n){

		BigInteger b = BigInteger.ONE;

		for(int i=1 ; i<=n ;++i){

			b = b.multiply(new BigInteger(Integer.toString(i)));
		}

		String s = b.toString();

		int len = s.length();

		char c = '0';

		for(int i = len-1 ; i>=0 ; --i){
			if(s.charAt(i)!='0'){
				c = s.charAt(i);
				break;
			}
		}

		return c;
	}	

	
	public static  void main(String []  args){

		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()){

			int n = sc.nextInt();

			String s = Integer.toString(n);

			int len = 5-s.length();

			for(int i = 0; i<len ; ++i)
				System.out.printf(" ");

			System.out.println(n+" -> "+fact(n));
		}
	}

}

