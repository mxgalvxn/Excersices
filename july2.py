from operator import truediv


digitos = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
entrada = int(input("Numero:"))
pandigital = True
for digito in digitos:
    if digito not in str(entrada):
       pandigital = False
print(pandigital)

entrada = entrada % 1000
print(entrada)

div = 0
for i in range (1, entrada):
    if ( entrada % i == 0 ):
        div += 1
primo = True
if (div > 1):
    primo =  False
print(primo)

