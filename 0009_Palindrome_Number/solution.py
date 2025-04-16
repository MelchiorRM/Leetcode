class Solution(object):
    def isPalindrome(self,x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x%10 == 0 and x!=0):
            return False
        
        half_reversed = 0
        while x>half_reversed:
            half_reversed = (half_reversed*10)+(x%10)
            x=x//10

        return x==half_reversed or x==half_reversed//10
    
if __name__ == "__main__":
    sol = Solution()
    data = int(input("Enter number: "))
    if sol.isPalindrome(data):
        print(f"{data} is a palindrome number.")
    else:
        print(f"{data} is not a palindrome number.")