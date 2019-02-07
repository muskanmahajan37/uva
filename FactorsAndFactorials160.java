import java.math.BigInteger;
import java.util.Scanner;


public class FactorsAndFactorials160 {


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int [] arr = new int[100];

        arr[2] = 1;

        for(int i= 3; i<=100 ; ++i)
            if(new BigInteger(Integer.toString(i)).isProbablePrime(10)){
                arr[i] = 1;
            }


        int [] result = new int result[100];
       

        while(true){

            int n = sc.nextInt();

            if(n==0)
                break;

            BigInteger bigInteger = BigInteger.ONE;


            for(int i = 1; i<=n ; ++i){
                bigInteger.multiply(new BigInteger(Integer.toString(i)));
            }

            for(int i = 0;i<100 ; ++i)
                System.out.printf("%d\t",arr[i]); System.out.println();


           

        }


    }


}
