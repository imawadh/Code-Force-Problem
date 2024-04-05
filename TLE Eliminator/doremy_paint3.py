# Solved 
test_cases = int(input())
for i in range (test_cases):
    number = int(input())
    values = list(map(int,input().split()))
    

    # If number of element is 2 then possible
    if(len(values)==2):
        print("YES")
        continue

    
    my_set = set()
    for j  in range(number):
        my_set.add(values[j])

    my_set = list(my_set) 
    if(len(my_set)==1):
        print("YES")
        
    
    elif(len(my_set)==2):
        value1 = my_set[0]
        value2 = my_set[1]
        count1=0
        count2=0

        for j in range(number):
            if(value1==values[j]):
               count1+=1
            else:
                count2+=1
        if(abs(count1-count2)==1 or count1-count2==0):
            print("YES")
        else:
            print("NO")

    else:
        print("NO")
        