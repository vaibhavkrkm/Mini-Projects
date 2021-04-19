import turtle
import random

tim = turtle.Turtle()
tim.color("red", "blue")
tim.pensize(5)
tim.shape("turtle")

tim.begin_fill()
tim.circle(50)
tim.end_fill()

tim.penup()
tim.forward(150)
tim.pendown()

tim.color("yellow", "black")

tim.begin_fill()
for x in range(4):
    tim.forward(100)
    tim.right(90)
tim.end_fill()
