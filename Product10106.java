//Status:AC

import java.math.BigInteger;
import java.util.Scanner;

public class Product10106 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        while(sc.hasNext()){


            BigInteger bigInteger = sc.nextBigInteger();
            BigInteger bigInteger1 = sc.nextBigInteger();
            
            System.out.println(bigInteger.multiply(bigInteger1));
            
        }


    }
}



