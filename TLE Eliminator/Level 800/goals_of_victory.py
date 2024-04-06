# Solved 
test = int(input())
for i in range(test):
    num  = int(input())
    values = list(map(int,input().split()))
    sum = 0
    for i in range(len(values)):
        sum += values[i]
    print(0-sum)