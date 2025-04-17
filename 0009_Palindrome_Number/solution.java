import java.util.Scanner;

public class Solution {
    public boolean isPalindrome(int x){
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        int half_reversed =0;
        while(x>half_reversed){
            half_reversed = (half_reversed*10)+(x%10);
            x=x/10;
        }
        return (x==half_reversed || x==half_reversed/10);
    }
    public static void main(String[] args){
        Solution sol = new Solution();
        int data;
        System.out.println("Enter a number : ");
        Scanner sc = new Scanner(System.in);
        data = sc.nextInt();
        if (sol.isPalindrome(data)){
            System.out.println(data + " is a palindrome number.");
        } else {
            System.out.println(data + " is not a palindrome number.");
        }
    }
}