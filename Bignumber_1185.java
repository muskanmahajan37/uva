import java.math.BigInteger;
import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; ++i) {

            String string = Integer.toString(sc.nextInt());

            BigInteger bigInteger = new BigInteger(string);

            BigInteger res = BigInteger.ONE;

            while (bigInteger.compareTo(new BigInteger("0")) != 0) {

               res = res.multiply(bigInteger);

               bigInteger = bigInteger.subtract(new BigInteger("1"));
            }

            System.out.println(res);

        }
    }




}
