test = int(input())
for i in range(test):
    num1,num2 = map(int,input().split())
    values = list(map(int,input().split()))
    values.sort()
    sum  = values[-1]
    index = 0
    min = 0

    while(values[index]<=num2):
        if(index==len(values)):
            break
        if(values[index]<=num2):
            min = values[index]
        index+=1

    print(min+sum)