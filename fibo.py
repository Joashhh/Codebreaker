fibo = [1,1]

n = int(input(""))
print(0)
if n == 1:
    print(1)
if n == 2:
    print(i for i in fibo)
for i in range(2, n):
	fibo.append((fibo[i-1]+fibo[i-2])%998244353)
for i in fibo:
    print(i)
