# Solved 
num1 , num2 = map(int,input().split())
values = list(map(int,input().split()))
count0 = 0
count2 = 0
count1= 0
count3= 0
for i in range(len(values)):
    if(values[i]==0):
        count0+=1
    elif(values[i]==1):
        count1+=1
    elif(values[i]==2):
        count2+=1
    elif(values[i]==3):
        count3+=1
    
