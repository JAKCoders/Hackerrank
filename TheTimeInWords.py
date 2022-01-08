words={0:"o' clock",1:"one",2:"two",3:"three",4:"four",5:"five",6:"six",7:"seven",8:"eight",9:"nine",10:"ten",11:"eleven",12:"twelve",13:"thirteen",14:"fortneen",16:"sixteen",17:"seventeen",18:"eighteen",19:"ninteen",20:"twenty",21:"twenty one",22:"twenty two",23:"twenty three",24:"twenty four",25:"twenty five",26:"twenty six",27:"twenty seven",28:"twenty eight",29:"twenty nine"}
btw={"l":"minutes past","m":"minutes to"}
h=int(input())
m=int(input())
if(m==0): print(words[h],words[m])
elif(m==1): print(words[m],"minute past",words[h])
elif(abs(30-m)==15): 
    if(m<=15): print("quarter past",words[h])
    else: print("quarter to",words[h+1])
elif(abs(60-m)==30): 
    if(m<=30): print("half past",words[h])
    else: print("half to",words[h+1])
elif(m<=30): print(words[m],btw["l"],words[h])
else: print(words[60-m],btw["m"],words[h+1])