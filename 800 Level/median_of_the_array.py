# Solved 
tests  = int(input())
for i in range(tests):
    num = int(input())
    values = list(map(int,input().split()))
    values.sort()
    mid = 0
    if(len(values)%2==0):
        mid = len(values)//2 - 1
    else:
        mid = len(values)//2
    

    if(len(values)==1  or values[mid+1]-values[mid]>=1):
        print(1)

    elif(len(values)==2):
        if(values[0]==values[1]):
            print(2)
        else:
            print(1)
    else:
        count = 1
        
        while values[mid+1]-values[mid]<1:
            mid+=1
            count+=1
            if(mid==len(values)-1):
                break
        print(count)