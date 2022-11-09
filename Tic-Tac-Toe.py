import random
def valid(ch):
    for i in range(0, len(n)):
        if i == 0 and n[i] == n[i+4] == n[i+8] == ch:  # ! diagonal check - ( 0 , 4 , 8)
            return 1
        elif i == 2 and n[i] == n[i+2] == n[i+4] == ch:  # ! diagonal check - ( 2 , 4 , 6)
            return 1
        elif i <= 6 and n[i] == n[i+1] == n[i+2] == ch:   # ! rows check - ( 0 , 3 , 6)
            return 1
        elif i <= 2 and n[i] == n[i+3] == n[i+6] == ch:  # ! column check - ( 0 , 1 , 2)
            return 1
    return 0
def ttt(n):
    n1 = n.copy()
    while len(n1):
        print("you can choose your choice", n1)
        q = int(input())
        n[q] = "O"
        n1.remove(int(q))
        for i in range(0, len(n), 3):
            print(n[i], "|", n[i+1], "|", n[i+2])
        if valid('O'):
            return 1
        if len(n1) > 1:
            s = random.choice(n1)
            n[int(s)] = "X"
            n1.remove(s)
        print(f"its computer turn,it placed at {s}")
        for i in range(0, len(n), 3):
            print(n[i], "|", n[i+1], "|", n[i+2])
        if valid('X'):
            return 0
    return -1
print("Tic Tac Toe")
n = [0, 1, 2, 3, 4, 5, 6, 7, 8]
for i in range(0, len(n), 3):
    print(n[i], "|", n[i+1], "|", n[i+2])
k = ttt(n)
if k == 1:
    print("congratulations you won")
elif k == 0:
    print("computer won ,better luck next time")
else:
    print("DRAW ,good efforts")

