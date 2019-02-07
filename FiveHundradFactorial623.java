//Status :AC

import java.util.*;
import java.math.*;

public class FiveHundradFactorial623{


	public static BigInteger fact(int n){

		BigInteger b = BigInteger.ONE;

		for(int i = 1; i<=n ; ++i){
			b = b.multiply(new BigInteger(Integer.toString(i)));
		}

		return b;
	}
	
	public static  void main(String []  args){

		Scanner sc = new Scanner(System.in);


		while(sc.hasNext()){

			int n = sc.nextInt();

			System.out.println(n+"!"); 

			System.out.println(fact(n));
		}

	}

}

