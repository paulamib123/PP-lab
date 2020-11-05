def calculator(choice, a, b):
    if choice == 1:
        return a + b
    elif choice == 2:
        return a - b
    elif choice == 3:
        return a * b
    elif choice == 4:
        return a / b
    elif choice == 5:
        return a % b
    else:
        return 0

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Modulus")

choice = int(input("Enter your choice: "))
a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
result = calculator(choice, a, b)
if result == 0:
    print("Wrong choice!")
else:
    print(result)