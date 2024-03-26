# Solved
num = int(input())
for i in range(num):
    a = int (input())
    b = input()
    index1 = -1
    index2 = len(b)-1
    for j in range(len(b)):
        if(b[j]=='B'):
            index1 = j
            break
    while(b[index2]!='B'):
        index2-=1

    if(index1==0 and index2==0):
        print(1)
    elif(index1==index2):
        print(1)
    else:
        print(index2-index1+1)
    