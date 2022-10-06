a=list("abcdefghijklmnopqrstuvwxyz1234567890")
y=input()
for i in range(len(y)):
    for j in range(len(a)):
       if y[i] == a[j]:
           a[j]="@"
           
       else:
            pass
s=''
for i in a:
    if i != "@":
        s+=i 
print(s)
