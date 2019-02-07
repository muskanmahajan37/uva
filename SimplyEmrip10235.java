//Status:

import java.util.*;
import java.math.BigInteger;

public class SimplyEmrip10235{


	public static void main(String[]args){

		Scanner sc = new Scanner(System.in);

		while(sc.hasNextInt()){

			int  n = sc.nextInt();

			BigInteger b = new BigInteger(Integer.toString(n));

			StringBuilder tmp2 = new StringBuilder();

			tmp2.append(b.toString());

			tmp2 = tmp2.reverse();

			String rv = tmp2.toString();

			Integer rn = Integer.parseInt(rv);

			BigInteger r = new BigInteger(rv);


			boolean p1 = b.isProbablePrime(10);
			boolean p2 = r.isProbablePrime(10);

		
			if(!p1)
				System.out.println(n+" is not prime.");
			else if( n!=rn && p2==true)
				System.out.println(n+" is emrip.");
			else
				System.out.println(n+" is prime.");

		}


	}

}