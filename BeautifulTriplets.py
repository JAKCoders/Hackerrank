def main():
    n,d=map(int,input().split())
    a = list(map(int,input().split()))
    b = list()
    for i in range(n):
        for j in range(n):
            if(a[j]-a[i]==d):
                b[0] = [i,j]
    print(b)
if __name__ =="__main__":
    main()