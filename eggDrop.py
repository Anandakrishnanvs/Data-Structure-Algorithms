def eggDrop(n,k):
    if n==1:
        m=0
        for i in range(1,k+1):
            m = m+1
        return m
    else:
        for m in range(1,k + 1):
            moves = m * (m + 1) // 2
            if moves>=k:
                return m

n=2
k=100    
a=eggDrop(n,k)
print(a)
