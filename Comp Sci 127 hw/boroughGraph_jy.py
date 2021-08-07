#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 27, 2019
#This program takes in a csv file containng data about population in NYC and the borough the user desires to see, 
#and outputs the graph that corresponds to the borough

import matplotlib.pyplot as plt
import pandas as pd

borough = input("Enter borough name: ")
output = input("Enter output file name: ")

pop = pd.read_csv('nycHistPop.csv', skiprows=5)
pop["Fraction"] = pop[borough]/pop["Total"]
pop.plot(x = "Year", y = "Fraction")

fig = plt.gcf()
fig.savefig(output)
# plt.show()
