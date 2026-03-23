name = input("Enter student name: ")
units = int(input("Enter number of registered units: "))

if units > 7:
    status = "Overload - Approval Required"
else:
    status = "Registration Accepted"

print("\n--- Registration Summary ---")
print("Student Name:", name)
print("Units:", units)
print("Status:", status)