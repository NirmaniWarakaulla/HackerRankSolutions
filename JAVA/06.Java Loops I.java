import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;


public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        sc.close();
        
        for(int i = 1; i <= 10; i++){
            int answer = input*i;
            System.out.println(input + " x " + i + " = " + answer);
        }
    }
}
