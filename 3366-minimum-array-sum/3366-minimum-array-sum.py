class Solution(object):
    def minArraySum(self, nums, k, op1, op2):
        """
        :type nums: List[int]
        :type k: int
        :type op1: int
        :type op2: int
        :rtype: int
        """
        dp = [[0]*(op2+1) for _ in range(op1+1)]
        INF = float('inf')
        for num in nums:
            val_none = num
            val_op1 = (num+1)//2
            val_op2 = num - k if num >= k else INF
            val_both = INF
            after_op1 = (num+1)//2
            if after_op1 >= k:
                val_both = min(val_both,after_op1-k)
            if num >= k:
                after_op2 = num - k
                val_both = min(val_both,(after_op2+1)//2)
            newdp = [[INF]*(op2+1) for _ in range(op1+1)]
            for a in range(op1+1):
                for b in range(op2+1):
                    best = dp[a][b] + val_none
                    if a>=1:
                        best = min(best,dp[a-1][b]+val_op1)
                    if b>=1 and val_op2 < INF:
                        best = min(best,dp[a][b-1]+val_op2)
                    if a>=1 and b>=1:
                        best = min(best,dp[a-1][b-1]+val_both)
                    newdp[a][b]=min(newdp[a][b],best)
            dp=newdp
        return min(dp[a][b] for a in range(op1+1) for b in range(op2+1))