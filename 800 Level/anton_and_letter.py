str = input()
# Solved
set= {'{'}
for i in range(len(str)):
    set.add(str[i])

if(len(set)==2):
    print(0)

elif(len(set)==3):
    print(1)

else:
    print(len(set)-4)

