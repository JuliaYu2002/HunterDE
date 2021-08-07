#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: October 11, 2019
#This program takes a csv data file and returns a graph showing the ratio of children to the total number, 
# of peope in a shelter

import pandas as pd
import matplotlib.pyplot as plt

inFile = input("Enter name of input file: ")
outFile = input("Enter name of output file: ")

homeless = pd.read_csv(inFile)

homeless["Fraction Children"] = homeless["Total Children in Shelter"] / homeless["Total Individuals in Shelter"]

homeless.plot(x = "Date of Census", y = "Fraction Children")
plt.savefig(outFile)
plt.show()
