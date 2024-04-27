test =int(input())
for i in range(test):
    a,b,c = map(int,input().split())
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    for i in arr1:
        if i>c:
           arr1.remove(i) 
    for i in arr2:
        if i>c:
           arr2.remove(i) 
    print(arr1)
    print(arr2)
    