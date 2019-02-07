
//Status :TLE
import java.math.BigInteger;

import java.util.Scanner;

public class SuperLongSums10013 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 0; i<n; ++i){
 int m = sc.nextInt();

            StringBuilder n1 = new StringBuilder();
            StringBuilder n2 = new StringBuilder();


            for(int j = 0 ; j<m ; ++j){

                String tmp1 = sc.next();
                String tmp2 = sc.next();
                n1.append(tmp1);
                n2.append(tmp2);

            }

            System.out.println(new BigInteger(n1.toString()).add(new BigInteger(n2.toString())));

            if(i!=n-1)
            System.out.println();
        }
    }
}
