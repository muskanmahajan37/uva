import java.math.BigInteger;
import java.util.Scanner;

public class Overflow465 {


    public static void main(String[] args) {

        Scanner sc  = new Scanner(System.in);

        while(sc.hasNext()){

            BigInteger bigInteger = sc.nextBigInteger();

            char c  = sc.next().charAt(0);

            BigInteger bigInteger1 = sc.nextBigInteger();

            BigInteger result ;

            if(c=='+')
                result = bigInteger.add(bigInteger1);

            else
                result = bigInteger.multiply(bigInteger1);

            System.out.println(bigInteger+" "+c+" "+bigInteger1);


            System.out.println(bigInteger.intValueExact());

        }

    }
}
