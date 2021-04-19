from collections import namedtuple

Point = namedtuple("Point", ["x", "y", "z"])

new_p = Point(3, 4, 5)
print(new_p)
print(new_p.x, new_p.y, new_p.z)

print(new_p._fields)

new_p = new_p._replace(y=6)
print(new_p.y)

p1 = Point._make(["a", "b", "c"])
print(p1)


# new_p._fields -> tuple of all the values in the named tuple
# new_p._replace() -> returns the same named tuple object with some specific values changed
# Point._make() -> makes a new named tuple of a certain structure
