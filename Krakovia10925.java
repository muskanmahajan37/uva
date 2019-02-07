
//Status : AC

import java.math.BigInteger;
import java.util.*;

public class Krakovia10925{

    public static void main(String[]args){

        int n ,f;

        Scanner sc = new Scanner(System.in);

        int kase = 0 ;

        while(true){

            n = sc.nextInt();
            f = sc.nextInt();

            if(n==0 && f==0)
                break;

            BigInteger total = new BigInteger("0");

            for(int i = 0; i<n ; ++i){

                BigInteger tmp = sc.nextBigInteger();

				total = total.add(tmp);

            }



            System.out.println("Bill #"+(++kase)+" costs "+total+": each friend should pay "+total.divide(new BigInteger(Integer.toString(f))));

            System.out.println();
        }

    }


}