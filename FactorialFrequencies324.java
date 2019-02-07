import java.util.*;
import java.math.*;

public class FactorialFrequencies324{

	public static String fact(int n){

		BigInteger b = BigInteger.ONE;

		for(int i=1 ; i<=n ;++i){

			b = b.multiply(new BigInteger(Integer.toString(i)));
		}

		return b.toString();
	}	
	
	public static  void main(String []  args){

		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()){


			int n = sc.nextInt();

			if(n==0)
				break;

			String res = fact(n);

			int []arr = new int[10];

			int len = res.length();

			for(int i = 0; i<len ; ++i){
				arr[(int)res.charAt(i)-48]++;
			}


			System.out.println(n+"! --");
			System.out.println("    (0)   "+arr[0]+"    (1)   "+arr[1]+"    (2)   "+arr[2]+"    (3)   "+arr[3]+"    (4)   "+arr[4]);
			System.out.println("    (5)   "+arr[5]+"    (6)   "+arr[6]+"    (7)   "+arr[7]+"    (8)   "+arr[8]+"    (9)   "+arr[9]);
		}


	}

}

