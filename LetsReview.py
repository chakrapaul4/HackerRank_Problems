n=int(input())
for i in range(0,n):
     string = input()
     even = string[0:len(string):2]
     odd = string[1:len(string):2]
     print(even + " "+ odd)
