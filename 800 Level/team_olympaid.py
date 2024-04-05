# Solved 
student = int(input())
values  = list(map(int,input().split()))

count1 = 0
list1 = []
count2= 0
list2 = []
count3 = 0
list3 = []
for i in range(len(values)):
    if(values[i]==1):
        count1+=1
        list1.append(i+1)
    elif(values[i]==2):
        count2+=1
        list2.append(i+1)
    else:
        count3+=1
        list3.append(i+1)

if(count1==0 or count3==0 or count2==0):
    print(0)
else:
    index = 0
    min_len  = min(len(list1),len(list2),len(list3))
    print(min_len)
    while(count1!=0 and count3!=0 and count2!=0):
        if(index>=min_len):
            break
        print(list1[index],list2[index],list3[index])
        count1-=1
        count2-=1
        count3-=1
        index+=1
        
    



