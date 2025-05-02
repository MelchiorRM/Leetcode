class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        prefix = strs[0]
        for s in strs[1:]:
            while not s.startswith(prefix):
                prefix = prefix[:-1]
                if not prefix:
                    return ""
        return prefix
    
if __name__ == "__main__":
    sol = Solution()
    table = []
    n = int(input("Enter the number of strings: "))
    print("Enter the strings:")
    for _ in range(n):
        table.append(input())
    result = sol.longestCommonPrefix(table)
    if not result:
        print("No common prefix found.")
    else:
        print("Longest common prefix:", result)