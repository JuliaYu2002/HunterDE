#Name: Julia Yu
#Date: October 31, 2019
#Email: julia.yu83@myhunter.cuny.edu
#This program has a turtle move 100 times with random angles each time

import turtle
import random

turt = turtle.Turtle()
turt.speed(10)

for i in range(100):
    turt.forward(30)
    randomNum = random.randrange(0, 360, 10)
    turt.right(randomNum)