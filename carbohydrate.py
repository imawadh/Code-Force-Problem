test  = int(input())
for i in range(test):
    str = input()
    index = 0
    sum = 0
    str = list(str)
    str.sort(reverse=True)
    
    while(index!=len(str)):
        
        sum += ord(str[index])
        if(sum>=270):
            break
        index+=1

    if(sum<270):
        print(-1)
    else:
        print(index+1)
