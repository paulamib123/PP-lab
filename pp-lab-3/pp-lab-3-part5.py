flag = True
count = 0
sum_odd = 0
count_odd = 0

while flag:
    n = int(input("Enter number: "))
    if n == -1:
        flag = False
    else:
        count += 1
        if n % 2 != 0:
            count_odd += 1
            sum_odd += n

print("\n Count of total numbers is: ", count)
print("Count of odd numbers is: ", count_odd)
print("Sum of odd numbers is: ", sum_odd)
print("Average of odd numbers is: ", sum_odd / count_odd)
