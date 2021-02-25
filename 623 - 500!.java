
import java.math.BigInteger;
import java.util.Scanner;




public class UVa500 {
    
    public static void main(String[] args) {
  Scanner in= new Scanner (System.in);
  while(in.hasNext()) {
   long n,i;
   n=in.nextInt();
  BigInteger fact=BigInteger.ONE;
  for(i=1; i<=n; i++) {
   fact=fact.multiply(BigInteger.valueOf(i));
  }
  System.out.println(n+"!");
  System.out.println(fact);
 }
 }
    
}
