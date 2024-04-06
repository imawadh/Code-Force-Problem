#solved 
tset = int(input())
for i in range(tset):
    a,b = map(int,input().split())
    value = (((a*(a-1))//2)-(b))
    if(a-b==1):
        print(1)
    elif(b<a):
        print(a)
    else:
        print(1)

        