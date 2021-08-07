#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 20, 2019
#This program takes in a picture and returns the number of pixels that have over .75 in white

import matplotlib.pyplot as plt
import numpy as np

picture = input("Enter file name: ")
img = plt.imread(picture)
countSnow = 0  # Number of pixels that are almost white
t = 0.75  # Threshold for almost white-- can adjust between 0.0 and 1.0

#For every pixel:
for i in range(img.shape[0]):
     for j in range(img.shape[1]):
          #Check if red, green, and blue are > t:
          if (img[i, j, 0] > t) and (img[i, j, 1] > t) and (img[i, j, 2] > t):
               countSnow = countSnow + 1

print("Snow count is", countSnow)
