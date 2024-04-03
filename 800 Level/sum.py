#solved
a = int(input())
for i in range(a):
    b,c,d = map(int,input().split())
    list = [b,c,d]
    list.sort()
    if(list[0]+list[1]==list[2]):
        print("YES")
    else:
        print("NO")