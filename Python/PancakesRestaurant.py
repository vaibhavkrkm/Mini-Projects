T = int(input("Enter the test case number : "))
L = int(input("Enter the no. of left side pancakes : "))
R = int(input("Enter the no. of right side pancakes : "))

total_pancakes = L + R


def update_pancakes(pancakes_served):
    global total_pancakes
    total_pancakes -= pancakes_served


customer_no = 1
customers_served = customer_no - 1

while(customer_no <= L or customer_no <= R):
    # run the test case                            i = 1
    pancakes_served = customer_no
    if(R > L):
        R -= pancakes_served
        update_pancakes(pancakes_served)
    else:
        L -= pancakes_served
        update_pancakes(pancakes_served)

    customer_no += 1
    customers_served += 1

print()
print("RESTAURANT CLOSED!")
print("_______________________")
print(f"Total customers served : {customers_served}")
print(f"Left side remaining pancakes : {L}")
print(f"Right side remaining pancakes : {R}")
