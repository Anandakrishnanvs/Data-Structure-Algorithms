class Solution:
    def maxProduct(self, n: int) -> int:
        rem=0
        digits = []
        product = 1
        while n > 0:
            rem = n%10
            digits.append(rem)
            n = n//10
        digits.sort()
        return digits[-1] * digits[-2]