# solved 
test = int(input())
for i in range(test):
    num = int(input())
    values = list(map(int,input().split()))
    new_value = [values[0]]
   
    for j in range(1,len(values)):
        
        if(values[j-1]>values[j]):
            new_value.append(values[j])
        new_value.append(values[j])
    print(len(new_value))
    for j in range(len(new_value)):
        print(new_value[j],end=' ')
    print()
    
            
