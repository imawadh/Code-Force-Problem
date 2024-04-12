# Solved
days = int(input())
values = list(map(int,input().split()))
max = 0
count = 1
for i in range(len(values)-1):
    if(values[i]<=values[i+1]):
        count+=1
    else:
        if(max<count):
            max = count
        count=1
if(max <= count):
    print(count) 
else:      
    print(max)