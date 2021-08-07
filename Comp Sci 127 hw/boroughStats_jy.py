#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 27, 2019
#This program takes in a borough and returns different statistics about it based of the csv file

import matplotlib.pyplot as plt
import pandas as pd

borough = input("Enter borough: ")

pop = pd.read_csv('nycHistPop.csv', skiprows=5)

print("Minimum population:", pop[borough].min())
print("Average population:", pop[borough].mean())
print("Maximum population:", pop[borough].max())
