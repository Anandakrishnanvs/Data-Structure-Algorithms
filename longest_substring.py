word = "abcdefabcdefghi"
def length(s):
    start = 0
    cur = 0
    max = 0
    lastindex = []
    sub = []
    maxstart=0
    for i in range(0, 256):
        lastindex.append(-1)
    for i in range(0, len(s)):
        c = ord(s[i])
        if lastindex[c] >= start:
            start = lastindex[c] + 1
        cur = i - start + 1
        if cur > max:
            max = cur
            maxstart=start
        lastindex[c] = i
    print(maxstart)
    for i in range(maxstart, maxstart+max):
        sub.append(s[i])
    print(sub)
    return max

print(length(word))
