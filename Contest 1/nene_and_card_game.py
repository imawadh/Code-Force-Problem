# Solved 
test = int(input())
for i in range(test):
    num = int(input())
    value = list(map(int,input().split()))
    value.sort()
    count = 0
    for j in range(len(value)-1):
        if(value[j]==value[j+1]):
            j+=1
            count+=1
    
    print(count)