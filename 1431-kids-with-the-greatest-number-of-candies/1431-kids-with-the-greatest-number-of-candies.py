class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max=0
        result = []
        for i in candies:
            if max < i:
                max = i
        for i in candies:
            if max <= (i + extraCandies):
                result.append(True)
            else:
                result.append(False)
        return result
    