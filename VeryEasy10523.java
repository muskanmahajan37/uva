//Status :AC

import java.math.BigInteger;
import java.util.Scanner;

public class VeryEasy10523 {

    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()){

            int N = sc.nextInt();
            String A = sc.next();


            BigInteger res = BigInteger.ZERO;

            for(int i = 1 ; i<=N; ++i){

                BigInteger bigInteger = new BigInteger(Integer.toString(i)).multiply(new BigInteger(A).pow(i));

                res = res.add(bigInteger);

            }

            System.out.println(res);
        }


    }
}
