#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 6, 2019
#This program has a turle turn left a number of degrees entered by the user

import turtle

design = turtle.Turtle()

for i in range(5):
    degrees = int(input("Enter a number: "))
    design.left(degrees)
    design.forward(100)
