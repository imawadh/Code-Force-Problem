# solved
num = int(input())
vals = list(map(int,input().split()))
vals.sort()
vals.reverse()
# print(vals)
sum = 0
count = 0
index = 0
while(sum<num):
    sum+=vals[index]
    count+=1
    index+=1
    if index == len(vals):
        break
if(sum>=num):
    print(count)
else:
    print(-1)