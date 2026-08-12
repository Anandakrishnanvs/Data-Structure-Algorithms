class Solution(object):
    def removeStars(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack = []
        result = []
        l = len(s)
        for i in range(0,l):
            if s[i]!='*':
                stack.append(s[i])
            else:
                stack.pop()
        return "".join(stack)