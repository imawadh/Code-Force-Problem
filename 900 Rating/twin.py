# Solved 
coin = int(input())
value = list(map(int,input().split()))
sum = 0
for i in range(len(value)):
    sum+=value[i]


value.sort()
count = 0
mycoin  = 0
i = len(value)-1
while(mycoin<=sum):
    if(i==-1):
        break
    sum-=value[i]
    mycoin+=value[i]
    count+=1
    i-=1
    

if(count==0):
    print(1)
else:
    print(count)
    
