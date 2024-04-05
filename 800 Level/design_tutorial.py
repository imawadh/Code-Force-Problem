# Solved
import math
def check_composite(intial_num,final_num):
    num1 = 0
    num2  = 0
    for i in range(2,int(math.sqrt(intial_num))+1):
        if(intial_num%i==0):
            num1=1
    for i in range(2,int(math.sqrt(final_num))+1):
        if(final_num%i==0):
            num2=1
    if(num1==1 and num2==1):
        print(intial_num,final_num)
    else:
        intial_num-=1
        final_num+=1
        check_composite(intial_num,final_num)
    
            

num = int(input())


if(num%2==0):
    if((num//2)%2==0):
        final_num = num//2-2
        intial_num = num//2+2
        print(intial_num,final_num)
    else:
        final_num = num//2-1
        intial_num = num//2+1
        print(intial_num,final_num)
else:
    intial_num = num//2
    final_num = num//2+1

    check_composite(intial_num,final_num)