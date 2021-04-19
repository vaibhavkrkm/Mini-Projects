def path_func(dir_list, length):
	working_dir_list = None
	working_length = None
	origin = (0, 0)
	current_place = list(origin)
	unit_distance = 5
	suppressor = None                             # variable for storing if length is less than len(dir_list) or len(dir_list) is less than length

	# when length is greator than len(dir_list)              dir_list = ['e', 's', 'w', 'n'], length = 5
	if(length > len(dir_list)):
		working_dir_list = dir_list
		working_length = len(dir_list)
		suppressor = 'dir'

	# when len(dir_list) is greator than length              dir_list = ['e', 's', 'w', 'n'], length = 3
	elif(len(dir_list) > length):
		working_length = length
		working_dir_list = [element for i, element in enumerate(dir_list) if i <= length - 1]
		suppressor = 'time'

	else:
		working_dir_list = dir_list
		working_length = length
		suppressor = 'dir'

	for i, DIR in enumerate(working_dir_list):
		# breaking the loop if it has crossed the working_length limit
		if(i > working_length - 1):
			break

		if(DIR == 'e'):                            # east
			current_place[0] += unit_distance
			current_place[1] += 0
		elif(DIR == 's'):                          # south
			current_place[0] += 0
			current_place[1] += unit_distance
		elif(DIR == 'w'):                          # west
			current_place[0] += -unit_distance
			current_place[1] += 0
		elif(DIR == 'n'):                          # north
			current_place[0] += 0
			current_place[1] += -unit_distance

	# checking if the ending place is the same as the original place or not
	if(tuple(current_place) == origin):
		print("Yeah! You would return to the original place!")
	else:
		print("You can't reach at the original place. REASON :", end=' ')
		if(suppressor == 'dir'):
			print("The directions you would go are not aligned so as to make you arrive at the same spot!")
		elif(suppressor == 'time'):
			print("You didn't have much time/length to pass through all the directions!")


path_func(dir_list=['e', 'w', 'n', 's'], length=5)
input()
