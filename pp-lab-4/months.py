def month(n):
    months = {1: "January", 2: "Februray", 3: "March", 4: "April", 5: "May", 6: "June",
            7: "July", 8: "August", 9: "September", 10: "October", 11: "November", 12: "December"}
    
    return months[n]

n = int(input("Enter number to find corresponding month: "))
if n > 12:
    print("Wrong Input!")
else:
    print(str(n) + " : " + month(n))