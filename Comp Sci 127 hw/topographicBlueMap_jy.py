#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 20, 2019
#A topographic map is made using elevation data

import numpy as np
import matplotlib.pyplot as plt

elevations = np.loadtxt('elevationsNYC.txt')
mapShape = elevations.shape + (3,)
floodMap = np.zeros(mapShape)

blue = float(input("How blue is the ocean: "))
outName = input("What is the output file: ")

for row in range(mapShape[0]):
    for col in range(mapShape[1]):
        if elevations[row, col] <= 0:
           floodMap[row, col, 2] = blue
        elif (elevations[row, col]) % 10 == 0:
           floodMap[row, col, :] = 0
        else:
            floodMap[row, col, :] = 1.0

# plt.imshow(floodMap)

# plt.show()

plt.imsave(outName, floodMap)
