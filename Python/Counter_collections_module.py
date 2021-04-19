from collections import Counter

c = Counter("gallad")
print(c)
c = Counter(["a", "a", "b", "c", "c"])
print(c)
d = Counter(a=1, b=2)
print(c["a"])
e = Counter("a")

print(c | e)


# subtract() -> subtracts a counter from another
# update()   -> adds _________________________
# most_common() ->
# clear() -> clears a counter
# c + d -> counter addition
# c - d -> counter subtraction
# & -> intersection operator
# | -> union operator
