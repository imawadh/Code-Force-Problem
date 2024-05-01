# solved

def fun(str):
    count = 0
    a = len(str)
    for i in range(a):
        if(str[i]=='U'):
            # str.remove(str[i])
            count+=1
            if(i!=len(str)-1):
             if(str[i+1]=='D'):
                str[i]='U'
             else:
                str[i]='D'
    if(count%2==0):
       print("NO")
    else:
       print("YES")


        


    
test = int(input())
for i in range(test):
    num = int(input())
    str = input()
    str =list(str)
    fun(str)