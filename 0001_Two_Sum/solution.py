class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i]+nums[j]==target:
                    return [i,j]
        return []

if __name__=="__main__":
    sol = Solution()
    target=int(input("Enter target: "))
    nums = []
    print("Enter numbers, stop with non-numeric input:")
    while True:
        try:
            number= int(input())
            nums.append(number)
        except ValueError:
            break
    result = sol.twoSum(nums, target)
    if result:
        print("Solutions: [ {result[0]}, {result[1]}]")