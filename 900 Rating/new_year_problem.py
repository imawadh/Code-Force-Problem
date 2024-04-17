# Not solved 
test = int(input())
for i in range(test):
    num = int(input())
    if(num<2020):
        print("NO")
    elif(num%10!=0):
        num = num - (2021*(num%10))
        if(num%10==0):
            num = num - (num//2020)*2020
            if(num==0):
                print("YES")
            else:
                print("NO")            
        else:
            print("NO")

    else:
            num = num - (num//2020)*2020
            if(num==0):
                print("YES")
            else:
                print("NO")   