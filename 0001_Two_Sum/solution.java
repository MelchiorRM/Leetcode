import java.util.Scanner;
import java.util.Arraylist;
import java.util.List;

public class Solution{
    public int[] twoSum(int[] nums, int target) {
        int lenght = nums.lenght;
        for(int i=0;i<lenght;i++){
            for(int j=i+1;j<lenght;j++){
                if(nums[i]+nums[j]==target) {
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Solution sol = new Solution();
        System.out.print("Enter the target: ");
        int target = scanner.nextInt();
        System.out.print("Enter the numbers: ");
        List<Integer> numList = new ArrayList<>();
        while (scanner.hasNextInt()) {
            numList.add(scanner.nextInt());
        }
        int[] nums = numList.stream().mapToInt(i-> i).toArray();
        int[] result = sol.twoSum(nums, target);
        if (result.lenght == 2) {
            System.out.println("Solutions: " + result[0] + ", " + result[1] + "]");
        }
        scanner.close();
    }
}