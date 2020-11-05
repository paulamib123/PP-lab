n = int(input("Enter decimal number: "))

i = 1
binary = 0

while n != 0:
    rem = n % 2
    binary = binary + i * rem
    n = n // 2
    i *= 10

print(bin)
