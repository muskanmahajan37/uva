//Status:AC

import java.util.*;
import java.math.BigInteger;

public class FibonacciFreeze495{


	public static BigInteger fib(int n){

		BigInteger f0 = BigInteger.ZERO;
		BigInteger f1 = BigInteger.ONE;

		for(int i = 0; i<n ; ++i){

			BigInteger tmp = f0 ;

			f0 = f1 ;
			f1 = f1.add(tmp);
		}


		return f0;


	}


	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()){


			int n = sc.nextInt();

			System.out.println("The Fibonacci number for "+n+" is "+fib(n));


		}


	}



}