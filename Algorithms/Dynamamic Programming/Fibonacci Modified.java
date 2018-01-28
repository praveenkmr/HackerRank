import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        BigInteger A,B,N;
        Scanner s=new Scanner(System.in);
        A=s.nextBigInteger();
        B=s.nextBigInteger();
        N=s.nextBigInteger();
        BigInteger temp=BigInteger.ONE;
        for(BigInteger x=new BigInteger("3");x.compareTo(N)<=0;x=x.add(BigInteger.ONE)){
            temp=(B.multiply(B)).add(A);
            A=B;
            B=temp;
        }
        System.out.println(temp);
    }
}