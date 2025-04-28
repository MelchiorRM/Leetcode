import java.util.Scanner;
import java.util.HashMap;

public class Solution{
    public int romanToInt(String s){
        HashMap<Character, Integer> roman = new HashMap<>();
        roman.put('I', 1);
        roman.put('V', 5);
        roman.put('X', 10);
        roman.put('L', 50);
        roman.put('C', 100);
        roman.put('D', 500);
        roman.put('M', 1000);

        int num = 0;
        int prev = 0;
        for(int i = s.length()-1; i>=0; i--){
            char c = s.charAt(i);
            int curr = roman.get(c);
            if (curr < prev){
                num= num-curr;
            } else {
                num = num+curr;
            }
            prev = curr;
        }
        return num;
    }
}
public class Main{
    public static void main(String[] args){
        Solution sol = new Solution();
        string data;
        System.out.println("Enter a Roman numeral:")
        Scanner sc = new Scanner(System.in);
        data = sc.nextLine();
        int value = sol.romanToInt(data);
        System.out.println("The integer value of is: " + value);
        sc.close();
    }
}