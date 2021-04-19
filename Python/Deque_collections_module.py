from collections import deque

d = deque("hello", maxlen=5)
# d.append(4)
# d.append(5)

# d.appendleft('10')

# print(d)

# d.pop()
# d.popleft()

# print(d)

# d.clear()

# print(d)

# d.extend("456")

# print(d)

# d.extend("hello")

# print(d)

# d.extend([1, 2, 3])
# d.extendleft("hey")

# print(d)

# d.rotate(2)

# print(d)

print(d)
d.append("a")
print(d)


# append() -> appends an element in a deque
# appendleft() -> appends an element to the left side in a deque
# pop() -> deletes an element in a deque
# popleft() -> deletes the leftmost element in a deque
# clear() -> clears a deque
# extend() -> extends an iterable object data to a deque
# extendleft() -> extends an iterable object to the left side in a deque
# rotate() -> rotates the deque according to the given integer
# maxlen attribute -> sets the max length of a deque
