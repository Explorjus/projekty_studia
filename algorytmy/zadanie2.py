x = 0
y = 9
z = 1
while z > 0:
    if z % 2 == 1: #jesli modulo z z jest rowne 1 
        x = x + y
    y = y * 2
    z = z // 2
print(x)
 