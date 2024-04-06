# Solved 
test = int(input())
for i in range(test):
    val = int(input())
    if(val%2==1):
        print("NO")
    

    else:
        # val*=2
        print("YES")
        count  = 0
        
        if(val%4==0):
            while(count!=val):
                print("AABB",end='')
                count+=4
            print()
        else:
            
            while(count<val):
                print("AA",end='')
                count+=2
                if(count==val):
                    break
                else:
                    print("BB",end='')
                    count+=2
            
            print()