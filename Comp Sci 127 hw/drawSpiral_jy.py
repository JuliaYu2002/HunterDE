#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 12, 2019
#This program makes a spiral using turtle and a for loop

import turtle

blockySpiral = turtle.Turtle()

for i in range(90, -1, -2):
    blockySpiral.forward(25)
    blockySpiral.left(i)