pos=0
neg=0
zero=0
n=int(input())
a=list(map(int,input().split()))
for i in range(n):
    if(a[i]>0):
        pos+=1
    elif(a[i]<0):
        neg+=1
    else:
        zero+=1
print("%.6f"%(pos/n))
print("%.6f"%(neg/n))
print("%.6f"%(zero/n))