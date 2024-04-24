# solved 
test = int(input())
for i in range(test):
    a,b,c=map(int,input().split())
    str = ''
    start_char = 97
    while(c!=0):
        str= str+chr(start_char)
        start_char+=1
        c-=1
    
    c = len(str)
    start_char-=1
    while(c<b):
        str= str+chr(start_char)
        b-=1
    b = len(str)
    # print(str)

    c = a//b
    str = str * c
    # print(str)
    index = 0
    while(len(str)!=a):
        str+=str[index]
        index+=1
    print(str)