n = int(input("Enter number to check if it is a power of 2: "))
if n != 0 and n & (n - 1) == 0:
    print("\nIt is a power of 2")
else:
    print("\nIt is not a power of 2")
