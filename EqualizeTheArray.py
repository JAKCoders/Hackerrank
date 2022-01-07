n=int(input())
a=list(map(int,input().split()))
s=list(set(a))
Count=[0]*len(s)
for i in range(len(s)):
    Count[i]=a.count(s[i])
res=max(Count)
if(Count.count(res)==n):
    print(Count.count(res)-1)
else: print(n-res)