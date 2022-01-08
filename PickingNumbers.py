n=int(input())
a=list(map(int,input().split()))
s=sorted(list(set(a)))
Count=[0]*(len(s)*2)
j=0
for i in range(len(s)-1):
    if(abs(s[i]-s[i+1])==1):
        Count[j]+=(a.count(s[i])+a.count(s[i+1]))
        j+=1
for i in range(len(s)):
    Count.append(a.count(s[i]))
if(len(s)==1): print(n)
else: print(max(Count))
