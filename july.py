n= int(input("Numero:"))
st_n= str(n)
lon= len(st_n)
pan=True
if lon >= 10:
  for i in range(10):
    for j in st_n:
      if j!=str(i) and j == st_n[-1]:
        pan= False
        break



print(pan)