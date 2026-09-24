class Solution(object):
    def smallestIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        min = 999
        flag = 0 
        for i in range(len(nums)):
            rem=0
            sum=0
            while nums[i] > 0:
                rem = nums[i] % 10
                sum = sum + rem
                nums[i] = nums[i] // 10
            if sum == i:
                if min > sum:
                    min = sum
                    flag=1
        if flag == 1:
            return min
        else:
            return -1
        
            

        