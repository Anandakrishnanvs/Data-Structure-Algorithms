class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        nums3 = [0] * (m+n)
        i=0 
        j=0 
        k=0
        while i < m and j < n :
            if nums1[i] <= nums2[j]:
                nums3[k] = nums1[i]
                i = i + 1
                k = k + 1
            else:
                nums3[k] = nums2[j]
                j = j + 1
                k = k + 1
        
        while i < m:
            nums3[k] = nums1[i]
            i = i + 1
            k = k + 1
        
        while j < n :
            nums3[k] = nums2[j]
            j = j + 1
            k = k + 1
        for idx in range(m + n):
            nums1[idx] = nums3[idx]

            

        