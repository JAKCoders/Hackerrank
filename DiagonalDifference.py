dia1=0
dia2=0
n=int(input())
a = []
for i in range(n):
    a.append(list(map(int,input().split())))
for i in range(n):
    for j in range(n):
        if(i==j):
            dia1+=a[i][j]
        if(i+j==(n-1)):
            dia2+=a[i][j]
print(abs(dia1-dia2))