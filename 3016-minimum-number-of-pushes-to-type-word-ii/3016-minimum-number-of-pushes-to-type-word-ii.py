
from collections import Counter
class Solution(object):
    def minimumPushes(self, word):
        freqs = sorted(Counter(word).values(),reverse=True)
        total = 0
        for i,f in enumerate(freqs):
            total = total + ( f * ((i//8) + 1))
        return total