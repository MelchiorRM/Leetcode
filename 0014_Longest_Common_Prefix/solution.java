import java.util.*;

class Solution {
    pulic String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        String prefix = strs[0];
        for(int i=1; i < strs.length; i++){
            while(!strs[i].startsWith(prefix)){
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of strings: ");
        int n = sc.nextInt();
        sc.nextLine();
        String[] table = new String[n];
        System.out.println("Enter the strings: ");
        for (int i=0; i<n; i++){
            table[i] = sc.nextLine();
        }
        String result = sol.longestCommonPrefix(table);
        if (result.isEmpty()) {
            System.out.println("No common prefix found.");
        } else {
            System.out.println("Longest common prefix: " + result);
        }
        sc.close();
    }
}