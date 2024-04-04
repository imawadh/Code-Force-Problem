# Solved
test_cases = int(input())
for i in range (test_cases):
    size = int(input())
    str = input()
    count = 0
    flag = 0
    for j in range(size-2):
        if(str[j]=='.' and str[j+1]=='.' and str[j+2]=='.'):
            flag = 1
            print(2)
            break

    if(flag==0):
        for j in range(size):
            if(str[j]=='.'):
                count+=1
        
    
    if(flag==0):
        print(count)            
             