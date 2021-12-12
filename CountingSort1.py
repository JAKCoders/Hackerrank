n=int(input())
a = list(map(int,input().split()))
count = [0]*100
for i in range(n):
    count[a[i]]+=1
print(*count,sep=' ')