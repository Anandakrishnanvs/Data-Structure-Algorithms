class Solution(object):
    def canSeePersonsCount(self, heights):
        l = len(heights)
        stacks = []
        counts = []
        countss = []
        for i in range(len(heights) - 1, -1, -1):
            print(heights[i])
            count=0
            flag=0
            if not stacks:
                stacks.append(heights[i])
            else:
                if stacks[-1] > heights[i]:
                    count += 1
                
                while stacks and  stacks[-1] < heights[i]:
                    stacks.pop()
                    count += 1
                    flag=1
                if stacks and flag==1:
                    count += 1
                stacks.append(heights[i])
            counts.append(count)
        for i in range(len(counts)-1,-1,-1):
            countss.append(counts[i])    
        return countss





        