# Solved
a,b,c,d = map(int,input().split())
list = [a,b,c,d]
list.sort()
print(list[3]-list[2],list[0]-list[3]+list[2],list[1]-list[3]+list[2])