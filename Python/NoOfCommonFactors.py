elements = input()
a, b = [int(e) for e in elements.split(" ")]     # 10 15

a_factors = [1]
for i in range(2, a-1):
        if(a % i == 0):
                a_factors.append(i)
a_factors.append(a)

b_factors = [1]
for i in range(2, b-1):
        if(b % i == 0):
                b_factors.append(i)
b_factors.append(b)

count = 0
for a_factor in a_factors:
        for b_factor in b_factors:
                if(a_factor == b_factor):
                        count += 1

print(count)
