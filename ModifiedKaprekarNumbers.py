p=int(input())
q=int(input())
x=False
for i in range(p,q+1):
    sq=i*i
    if(len(str(sq))==1 and sq==i):
        x=True
        print(i,end=" ")
    elif(len(str(sq))>1):
        r=len(str(sq))-len(str(i))
        st=str(sq)
        if((int(st[:r])+int(st[r:]))==i):
            x=True
            print(i,end=" ")
        if(not(x)): print("INVALID RANGE")