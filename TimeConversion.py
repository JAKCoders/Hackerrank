time=input()
if(time[8]=="P"):
    if(int(time[:2])==12):
        print(time[:8])
    elif(int(time[:2])>=1 and int(time[:2])<=11):
        print((str(int(time[:2])+12)+time[2:8]))
elif(time[8]=="A"): 
    if(int(time[:2])==12):
        print("00"+time[2:8])
    elif(int(time[:2])>=1 and int(time[:2])<=11):
            print(time[:2]+time[2:8])