def swap_case(s):
    s=list(s)
    s1=[]
    for i in s:
        if i is i.lower():
            s1.append(i.upper())
        else:
            s1.append(i.lower())
    s2=""
    for i in s1:
        s2+=i
    return s2
                

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
