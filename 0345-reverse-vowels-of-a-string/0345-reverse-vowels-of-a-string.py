class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        r = list(s)
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        l = len(s)
        i = 0
        j = l - 1
        while i<j and i!=j:
            if r[i] not in vowels:
                 i = i + 1
            elif r[j] not in vowels:
                 j = j -1
            if r[i] in vowels and r[j] in vowels:
                temp = r[i]
                r[i] = r[j]
                r[j] = temp
                i = i + 1
                j = j - 1
        s = "".join(r)
        return s    
        