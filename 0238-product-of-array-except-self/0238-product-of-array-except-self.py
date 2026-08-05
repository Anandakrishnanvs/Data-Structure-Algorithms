class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = len(nums)
        result = [1] * l
        
        left=1
        for i in range(0,l):
            result[i] = left
            left *= nums[i]
        right = 1
        for i in range(l-1,-1,-1):
            result[i] *= right
            right *= nums[i]
            
        return result
            
        