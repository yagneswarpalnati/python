string=input()
max_width=int(input())
ret_val = list()
for i in range( len(string)):
        ret_val.append(string[i: i + max_width])
r='\n'.join(ret_val)
print(r)

#m-2
>>> import textwrap
>>> string = "This is a very very very very very long string."
>>> print textwrap.wrap(string,8)
['This is', 'a very', 'very', 'very', 'very', 'very', 'long', 'string.'] 

#m-3
>>> import textwrap
>>> string = "This is a very very very very very long string."
>>> print textwrap.fill(string,8)
This is
a very
very
very
very
very
long
string.
