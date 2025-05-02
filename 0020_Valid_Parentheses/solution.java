import java.util.*;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> pile = new Stack<>();
        Map<Character, Character> couple = new HashMap<>();
        couple.put(')', '(');
        couple.put('}', '{');
        couple.put(']', '[');
        for (char c: s.toCharArray()) {
            if (couple.containsKey(c)) {
                if(pile.isEmpty() || pile.peek() != couple.get(c)) {
                    return false;
                }
                pile.pop();
            } else {
                pile.push(c);
            }
        }
        return pile.isEmpty();
    }
}
public class Main {
    public static void main(String[] args) {
        Solution sol = new Solution();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string of parentheses: ");
        String data = sc.nextLine();
        if (sol.isValid(data)) {
            System.out.println("The string is valid.");
        } else {
            System.out.println("The string is not valid.");
        }
        sc.close();
    }
}