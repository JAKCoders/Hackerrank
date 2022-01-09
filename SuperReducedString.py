def reduce(st):
    x=False
    for i in range(len(st)-1):
        if(st[i]==st[i+1]):
            st=st[:i]+st[i+2:]
            x=True
        if(x):
            break
    if(x):
        reduce(st)
    else:
        if(len(st)==0): print("Empty String")
        else: 
            for i in range(len(st)):
                print(st[i],end="")
st = input()
st1=list(" ".join(st))
st1=list(filter((" ").__ne__,st1))
reduce(st1)