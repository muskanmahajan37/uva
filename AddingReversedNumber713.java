//Status :AC

import java.util.*;
import java.math.BigInteger;


public class AddingReversedNumber713{


    public static void main(String [] args){


        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i= 0 ; i<n ; ++i){


            String n1 = sc.next();
            String n2 = sc.next();

            BigInteger bigInteger = new BigInteger(new StringBuffer(n1).reverse().toString());
            BigInteger bigInteger1 = new BigInteger(new StringBuffer(n2).reverse().toString());

            BigInteger res = bigInteger.add(bigInteger1);


            StringBuilder s = new StringBuilder(new StringBuffer(res.toString()).reverse().toString());

            int len = s.length();

            int j = 0 ;

            while(s.charAt(j)=='0')
                j++;
           
            s.delete(0,j);

            System.out.println(s.toString());
        }


    }


}