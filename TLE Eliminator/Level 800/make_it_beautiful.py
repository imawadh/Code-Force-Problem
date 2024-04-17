# not solved 
test = int(input())
for i in range(test):
    num = int(input())
    val = list(map(int,input().split()))
    sum = 0
    flag = 1
    for j in range(0,len(val)):
        if(sum==val[j]):
            flag = 0
            break
        sum+=val[j]
    if(flag==0):
        val.sort(reverse=True)
        print(val)
        for j in range(0,len(val)):
            if(sum==val[j]):
                flag = 0
                break
            sum+=val[j]
    if(flag==0):
        print("NO")
    else:
        print("YES")

