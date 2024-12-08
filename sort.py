x = int(input(""))
y = input('')
integers = list(map(int, y.split()))
integers.sort()
s = ""
for i in integers:
    s += str(i)
    s += " "
print(s)
