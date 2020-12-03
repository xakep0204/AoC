import re


f2 = open('2.txt','r')
inp = f2.readlines()
count = 0
for s in inp:
  bit = 0
  reg1 = r"\d\W\d"
  reg2 = r"\D\:"
  reg3 = r"\:\s"
  if(re.search(reg1, s).span()[0] != 0 and s[4] != ' '):
    low = int(s[0]+s[1])-1
    up = int(s[3]+s[4])-1
  elif(re.search(reg1, s).span()[0] == 0 and s[3] != ' '):
    low = int(s[0])-1
    up = int(s[2]+s[3])-1
  else: 
    low = int(s[0])-1
    up = int(s[2])-1
  fin = s[re.search(reg2, s).span()[0]]
  a = re.search(reg3, s).span()[1]
  b = len(s) - 2
  saerch = s[a:b+1]
  l = saerch.count(fin)
  if(((fin == saerch[low]) !=  (fin == saerch[up]))):
    count += 1
    bit = 1
  print(s)
  print(f'{low} {up} {saerch} {l} {fin} {bit}')
print(count)
