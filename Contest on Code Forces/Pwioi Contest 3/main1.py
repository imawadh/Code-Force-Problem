test = int(input())
while(test>0):
    a,b,n,s=map(int,input().split())
    flag = False
    if(n>s):
        if(b>=s):
            print("YES")
            continue
        else:
            print("NO")
            continue
    while(a>0):
        s-=n
        if(s<n):
            if(s<=b):
                print("YES")
                flag=True
            break
        a-=1
    if(flag==False):
        print("NO")
    test-=1
