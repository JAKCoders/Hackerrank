sum=0
a=list(map(int,input().split()))
for i in range(len(a)):
    sum+=a[i]
print(sum-max(a),sum-min(a))