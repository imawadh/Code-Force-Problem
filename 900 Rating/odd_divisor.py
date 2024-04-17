# not solved 
import math
test = int(input())
for i in range(test):
    num = int(input())
    count = 0
    flag = 0
    for j in range(1,num+1,2):
        if(num%j==0):
            count+=1   
        if(count>1):
            flag = 1
            print("YES")
            break

    if(flag==0):
        print("NO")
