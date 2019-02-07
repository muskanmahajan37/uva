//Status:AC

import java.math.BigInteger;
import java.util.Scanner;

public class IntegerInquiry424 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        BigInteger sum = new BigInteger("0");

        while(true){

            BigInteger bigInteger = sc.nextBigInteger();

            if(bigInteger.compareTo(new BigInteger("0"))==0) break;
            
            sum = sum.add(bigInteger);

        }
        
        
        System.out.println(sum);



    }
}
