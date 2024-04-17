test = int(input())
for i in range(test):
    num = int(input())
    val = list(map(int,input().split()))
    count1= 0
    count2=0

    for i in range(len(val)):
        if(val[i]==1):
            count1+=1
        else:
            count2+=1

    if(count1>=count2):
        if(count2%2==0):
            print(0)
        else:
            print(1)
    # else:
    #     dif=count2-count1
    #     count1 = 

        