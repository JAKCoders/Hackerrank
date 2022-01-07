t=int(input())
for i in range(t):
    b,w = map(int,input().split())
    bc,wc,z = map(int,input().split())
    print(b*min(bc,wc+z)+w*min(wc,bc+z))    