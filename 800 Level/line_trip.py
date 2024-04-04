# Solved

test_case = int(input())
for i in range(test_case):
    a,b = map(int,input().split())
    values = list(map(int,input().split()))
    difference  = values[0]
    for j in range (a-1):
        if(values[j+1]-values[j]>difference):
            difference = values[j+1]-values[j]
    if(len(values)==1):
        if(values[0]>=2*(b-values[0])):
            print(values[0])
        else:
            print(2*(b-values[0]))

    elif( 2*(b-values[-1])>difference):
        print(2*(b-values[-1]))
    else:
        print(difference)