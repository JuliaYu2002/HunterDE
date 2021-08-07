#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 3, 2019
#This programe makes all the pixels of an image have a blue tint

import matplotlib.pyplot as plt
import numpy as np

userPic = input("Enter name of the input file: ")
blueUserPic = input("Enter name of the output file: ")

img = plt.imread(userPic)
# plt.imshow(img)
# plt.show()

newPic = img.copy()
newPic[:, :, 0] = 0
newPic[:, :, 1] = 0
plt.imsave(blueUserPic, newPic)
# plt.imshow(newPic)
# plt.show()

# for row in range(newPic.getHeight()):
#     for col in range(newPic.getWidth()):
#         newPic.setPixel(col, row, blue)

