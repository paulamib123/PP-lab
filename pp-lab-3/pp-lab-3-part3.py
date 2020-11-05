n = int(input("Enter number to find factorial: "))

if n < 0:
    print("Sorry, factorial does not exsist for negative numbers")
elif n == 0:
    print("Factorial is: 1")
else:
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i
    print("Factorial is: ", factorial)
