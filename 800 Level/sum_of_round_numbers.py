# Solved 
test = int(input())
for i in range(test):
    num = int(input())
    list_value  = []
    a=1
    
    while(num!=0):
        value = num%10
        if(value!=0):
            list_value.append(value*a)
        num=num//10
        a*=10
    print(len(list_value))
    for i in range(len(list_value)):
        print(list_value[i],end=' ')

    print()


