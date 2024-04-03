n, k, l, c, d, p, nl, np = map(int,input().split())
drink = k*l
slice = c*d
salt = p
each_one_drink = nl
each_one_salt = np
list = [drink//(n*each_one_drink),slice//n,salt//(np*n)]
list.sort()
print(list[0])