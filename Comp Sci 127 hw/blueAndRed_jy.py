#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 27, 2019
#This program makes the background blue and the line red

import turtle
wn = turtle.Screen()             # Set up the window and its attributes
wn.bgcolor("blue")


tess = turtle.Turtle()           # create tess and set some attributes
tess.color("red")
tess.pensize(5)

alex = turtle.Turtle()           # create alex

tess.forward(80)                 # Let tess draw an equilateral triangle
tess.left(120)
tess.forward(80)
tess.left(120)
tess.forward(80)
tess.left(120)                   # complete the triangle

tess.right(180)                  # turn tess around
tess.forward(80)                 # move her away from the origin

alex.forward(50)                 # make alex draw a square
alex.left(90)
alex.forward(50)
alex.left(90)
alex.forward(50)
alex.left(90)
alex.forward(50)
alex.left(90)

wn.exitonclick()
