# solved 
test = int(input())
for i in range(test):
    num = int(input())
    flag = 1
    count = 0
    if(num==1):
        print(0)
    elif((num*2)%3==0):
        while(num!=1):
            if(num%2==0 and num%3==0):
                # print("#")
                num//=6
                count+=1
                # print(num)

            else:
                # print("*")
                num*=2
                count+=1
                # print(num)
            if(num==1):
                break
            else:
             if(num%3!=0):
                flag = 0
                print(-1)
                break
            

        if(flag == 1):
            print(count)


    else:
        print("-1")