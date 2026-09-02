class Solution(object):
    def uniformArray(self, nums1):
        """
        :type nums1: List[int]
        :rtype: bool
        """
        n = len(nums1)
        if n <= 1:
            return True
        count_odd = sum(1 for x in nums1 if x%2!=0)
        target_even = (count_odd != 1)
        target_odd = (count_odd >= 1)
        return target_even or target_odd


            


        