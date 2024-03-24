str = input()
i = 0
# solved
while(i<len(str)):
    if(str[i]=='-' and str[i+1]=='-'):
        i+=2
        print(2,end='')
    elif(str[i]=='-' and str[i+1]=='.'):
        i+=2
        print(1,end='')
    else:
        i+=1
        print(0,end='')
    
