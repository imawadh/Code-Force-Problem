# Solved
st1 = input()
st2 = input()
st3 = input()
if(len(st1)+len(st2)==len(st3)):
    l1=list(st1)
    l2=list(st2)
    l3=list(st3)
    flag = 1
    for i in range(len(l1)):
        for j in range(len(l3)):
            if(l1[i] in l3[j]):
                flag = 1  
                l3.remove(l3[j])
                break
            else:
                flag = 0
        if(flag==0):
            print("NO")
            break  
    if(flag == 1):
        for i in range(len(l2)):
            for j in range(len(l3)):
                if(l2[i]in l3[j]):
                    flag = 1  
                    l3.remove(l3[j])
                    break
                else:
                    flag = 0
            if(flag==0):
                print("NO")
                break  


    if(len(l3)==0):
        print("YES")   


else:
    print("NO")