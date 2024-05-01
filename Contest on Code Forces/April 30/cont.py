# Solved 

def fun(arr1,arr2):
    index1= 0
    index2=0
    count = 0
    while(index2<len(arr2)):
        if(arr1[index1]<=arr2[index2]):
            index1+=1
            index2+=1

        # elif(arr1[index1]>arr2[index2]):
        else:
            index2+=1
            count+=1
    print(count)


test = int(input())
for i in range(test):
    num =int(input())
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    fun(arr1,arr2)