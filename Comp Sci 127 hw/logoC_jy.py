#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 13, 2019
#This program makes a C logo that's blue

import numpy as np
import matplotlib.pyplot as plt

logo = np.ones((30, 30, 3))

logo[0:10, :, :2] = 0
logo[10: 20, 0: 10, :2] = 0
logo[20:, :, :2] = 0

plt.imsave("logo.png", logo)
# plt.imshow(logo)
# plt.show()
