# Not Solved 
test = int(input())
for i in range(test):
    num1 = int(input())
    values1 = list(map(int,input().split()))
    arr1 = [values1[0]]
    arr2 = list()
    for j in range(1,len(values1)):
        if(arr1[0]%values1[j]==0):
            arr1.append(values1[j])
        else:
            arr2.append(values1[j])
    
    if(len(arr2)==0 ):
        print(-1)
    else:
        for j in range(len(arr1)):
            print(arr1[j],end=' ')
        print()
        for j in range(len(arr2)):
            print(arr2[j],end = ' ')
        print()