atomic_no = int(input("Please Enter the Atomic Number : "))

atomic_no_list = []

if(atomic_no <= 2):
    atomic_no_list = [atomic_no]
else:
    atomic_no_temp = atomic_no - 2
    atomic_no_list = [2, (atomic_no_temp // 8) * " 8 "]

print(atomic_no_list)
