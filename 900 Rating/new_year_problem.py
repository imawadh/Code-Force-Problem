# solved 

test = int(input())
for i in range(test):
    num = int(input())
    if(num<2020):
        print("No")
        continue
    flag = 1
    while(num%2020!=0):
        num-=2021
        if(num%2020==0):
            flag =1
            break
        if(num<2020):
            flag = 2
    
            break
    if(flag ==1):
        print("Yes")
    else:
        print("No")
        