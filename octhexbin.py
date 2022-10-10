n=int(input())
length=len(bin(n)[2:])
for i in range(n):
    bina=bin(i)
    octa=oct(i)
    haxa=hex(i)
    print("{} {} {} {}".format(str(i).rjust(length),bina[2:].rjust(length),octa[2:].rjust(length),haxa[2:].rjust(length)))
    
