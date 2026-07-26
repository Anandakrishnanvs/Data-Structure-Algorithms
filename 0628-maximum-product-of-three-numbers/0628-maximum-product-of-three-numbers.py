class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        digits = []
        for i in nums:
            digits.append(i)
        digits.sort()
        return max(digits[-1]*digits[-2]*digits[-3],digits[0]*digits[1]*digits[-1])