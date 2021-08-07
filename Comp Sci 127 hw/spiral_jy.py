#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 27, 2019
#This program draws a spiral pattern repeated 36 times

import turtle

circle = turtle.Turtle()

for i in range(36):
    circle.forward(100)
    circle.left(55)
    circle.forward(10)
    circle.left(55)
    circle.forward(100)
