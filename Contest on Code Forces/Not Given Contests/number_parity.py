test = int(input())
# solved 
for i in range(test):
    num = int(input())
    values = list(map(int,input().split()))
    count = 0
    for j in range(num):
        if(values[j]&1==1):
            count+=1

    if(count&1==1):
        print("NO")
    else:
        print("YES")