a ,b = input().split()
# not solved

a = int(a)
b = int(b)
c = 0
# def corner():
    
while(c<a):
    d = 0
    while(d<b):
        if(c%2==0):
            print('#',end='')
        else:
            print('.',end='')
        d+=1
    c+=1
    print()