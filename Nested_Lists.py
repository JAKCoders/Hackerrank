from operator import itemgetter
score_list = []
name=""
scores=[]
n=int(input())
for i in range(n):
    name = input()
    score = float(input())
    scores.append(score)
    score_list.append([name, score])
score_list=sorted(score_list, key=lambda x:x[0])
scores.sort()
if(scores[n-1]>=0):
    scores = [ele for ele in scores if ele > 0]
mini=scores[0]
for i in range (1,len(scores)):
    if mini!=scores[i]:
        mini=scores[i]
        break
if len(scores)==1:
    scores.append(scores[0])
for i in score_list:
    if i[1]==mini:
        print(i[0])