num = int(input())
# Not Soved
for i in range(num):
    a,b= input().split()
    a = int(a)
    b = int(b)
    if(a%2==0 and b%2==0):
        if(a>=2 and b>=2):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")