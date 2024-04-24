# not solved 
import math
num = int(input())
values = list(map(int,input().split()))
for i in values:
    flag = False
    k = int(math.sqrt(i))
    for j in range(2,k+9):
        print(j)
        if(i%j==0):
            flag=True
            if(i//j==2):
                print("YES")
                break
            else:
                print("NO")
                break
    if(flag==False):
        print("NO")
            
