n = int(input("Numero:"))
st_n= str(n)
lon= len(st_n)
pan= 0 
pandi = False
if lon >= 10:
  for i in range(10):
    for j in st_n:
      if j==str(i):
        pan += 1
        break

if pan == 10:
    pandi = True     
print(f'El numero es pandi: {pandi}')

n = n % 1000
print(n)

div = 0
for i in range (1, n):
    if ( n % i == 0 ):
        div += 1
primo = True
if (div > 1):
    primo =  False
print(f'El numero es primo: {primo}')