ch = input("Enter data: ")

if ch[0].isdigit():
    print("Entered data is a digit")
elif ch[0].isupper():
    print("Entered data is alphabet in uppercase")
else:
    print("Entered data is alphabet in lowercase")

