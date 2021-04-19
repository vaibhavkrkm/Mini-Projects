# D1 --> Day at which company A starts producing vaccines
# D2 --> Day at which company B starts producing vaccines
# V1 --> Vaccines produced by company A per day
# V2 --> Vaccines produced by company B per day
# P --> Required number of vaccines
# d --> Required number of days to complete the required production of vaccines (P)
# Current day --> 1
# Input (space seperated) --> D1 V1 D2 V2 P
# Output --> d

user_input = input()
user_input_list = [int(data) for data in user_input.split()]									   # [D1, V1, D2, V2, P]
D1, V1, D2, V2, P = user_input_list[0], user_input_list[1], user_input_list[2], user_input_list[3], user_input_list[4]

day_no = 1
vaccines_made = 0

while True:
		if(day_no >= D1):
				vaccines_made += V1
		if(day_no >= D2):
				vaccines_made += V2

		if(vaccines_made >= P):
			break

		day_no += 1

d = day_no
print(d)
