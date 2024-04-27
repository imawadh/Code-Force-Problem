test = int(input())

for i in range(test):
    num = int(input())
    start = 1
    multiply = 1
    count = 1
    while(start<num):
        if(start%3==1):
            count = count + 2**multiply
            multiply+=1
        else:
            count+=1
        start+=1
    print(count)
