# not solved 

test = int(input())
while(test!=0):
    a,b,c=map(int,input().split())
    count1 = 0
    c+=1
    count2=0
    d = 1
    e = 1
    my_set = set()
    while(count1!=a):
        my_set.add(c+d*a)
        d+=1
        count1+=1
    while count2!=b:
        my_set.add(c+e*b)
        e+=1
        count2+=1

    print(len(my_set))


    test-=1