class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        num = 0
        prev = 0
        for c in reversed(s):
            curr = roman[c]
            if curr < prev:
                num=num-curr
            else:
                num=num+curr
            prev=curr
        return num

if __name__ == "__main__":
    solution = Solution()
    data = input("Enter a Roman numeral: ")
    value = solution.romanToInt(data)
    print(f"The integer value of is {value}.")
    