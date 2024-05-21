test = int(input())
for i in range(test):
    a,b,c,d = map(int,input().split())
    arr = [1,2,3,4,5,6,7,8,9,10,11,12]
    index1 = 0
    index2 = 0
    index3 = 0
    index4 = 0
    for i in range(len(arr)):
        if(i==a):
            index1=i
        if(i==b):
            index2=i

        if(i==c):
            index3=i
        if(i==d):
            index4=i

    if(index1<=index3 or index1<=index4 and index2>=index3 or index2>=index4):
        print("YES")
    else:
        print("NO")
