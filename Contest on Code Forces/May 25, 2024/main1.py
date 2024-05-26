test = int(input())
for k in range(test):
    num = int(input())
    vals1 = list(map(int,input().split()))
    vals = vals1.copy()
    vals1.sort()

    ans  = list()
    n = len(vals)
    flag = False
    for i in range(len(vals)):
        ans = vals[i:] + vals[:i]
        ans +=ans
        index = 0
        flag = False
        for j in range(len(ans)):
            if(vals1[index]==ans[j]):
                index+=1
                if(index == len(vals)):
                    flag = True
                    break
            else:
                index = 0
                
            
           
        if(flag):
            print("YES")
            break

    if flag==False:
        print("NO")


    
    
    