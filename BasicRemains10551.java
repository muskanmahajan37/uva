//Status : AC

import java.util.*;
import java.math.BigInteger;

public class BasicRemains10551{


	public static void main(String[] args){

		
		Scanner sc = new Scanner(System.in);

		while(true){

			int base = sc.nextInt();

			if(base==0) break;

			BigInteger p = new BigInteger(sc.next(),base);
			BigInteger m = new BigInteger(sc.next(),base);

			System.out.println(p.mod(m).toString(base));
		}



	}

}