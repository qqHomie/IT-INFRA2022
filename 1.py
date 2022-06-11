def to_bin(x):
    s = ''
    while(1):
        s += str(x%2)
        x //= 2
        if x < 1:
            break
    print(s[::-1])

def to_dec(X):
    n = 0
    for i in range(len(x)):
        n = n*2 + int(x[i])
    print(n)

x = input()
to_dec(x)
