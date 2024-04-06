test = int(input())
for i in range(test):
    a,b,c = map(int,input().split())
    if(c%2==0):
        if(a>b):
            print("First")
        else:
            print("Second")
    else:
        a+=1
        if(a>b):
            print("First")
        else:
            print("Second")
