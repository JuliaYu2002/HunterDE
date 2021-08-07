#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 30, 2019
#This program uses turtle to draw a circle in shades of blue

#A program that demonstrates the shades of red
#Fall 2017

import turtle  # Import the turtle drawing package

turtle.colormode(255)  # Allows colors to be given as 0...255
tess = turtle.Turtle()  # Create a turtle
tess.shape("turtle")  # Make it turtle shaped
tess.backward(100)  # Move her backwards, to give more space to draw

#For 0,10,20,...,250
for i in range(0, 255, 10):
     tess.forward(10)  # Move forward
     tess.pensize(i)  # Set the drawing size to be i (larger each time)
     tess.color(0, 0, i)  # Set the red channel to be i (brighter each time)
