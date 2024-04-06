# solved
num  = int(input())
values  = list(map(int,input().split()))
countp = 0
countc = 0
countpc = 0
for i in range(len(values)):
    if values[i]==-1:
        if(countp==0):
            countpc+=1
        else:
            countp-=1
    else:
        countp+=values[i]
print(countpc)