class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        pile = []
        couple = {')': '(', '}': '{', ']': '['}
        for char in s:
            if char in couple:
                if not pile or pile[-1] != couple[char]:
                    return False
                pile.pop()
            else:
                pile.append(char)
        return not pile

if __name__ == "__main__":
    sol = Solution()
    data = input("Enter a string of parentheses: ")
    result = sol.isValid(data)
    print(f"The string is {'valid' if result else 'invalid'}.")