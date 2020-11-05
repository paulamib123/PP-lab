def is_prime(n):
    if n==1:
        return 0
    elif n==2:
        return 1
    else:
        for x in range(2, n):
            if n % x == 0:
                return 0
        return 1          

n = int(input("Enter a number: "))
print(is_prime(n))
