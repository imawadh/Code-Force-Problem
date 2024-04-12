# Solved 
test = int(input())
for i in range(test):
    num = int(input())
    value = list(map(int,input().split()))
    flag = 1
    for j in range(1,len(value)):
        if(value[j-1]>value[j]):
            print(0)
            flag = 0
            break
    min = value[1]-value[0]
    if flag==1:
        for j in range(len(value)-1):
            if(min>value[j+1]-value[j]):
                min = value[j+1]-value[j]
        print(min//2+1)