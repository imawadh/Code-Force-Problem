num = int(input())
# Solved
faces = 0
for i in range(num):
    a = input()
    if(a=="Tetrahedron" ):
        faces+=4
    elif(a=='Cube'):
        faces+=6
    elif(a=="Octahedron"):
        faces+=8
    elif(a=="Dodecahedron"):
        faces+=12
    else:
        faces+=20
print(faces)