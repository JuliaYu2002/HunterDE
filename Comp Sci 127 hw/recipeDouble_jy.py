#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: October 4, 2019
#This takes in a csv file and returns doubled values

import matplotlib.pyplot as plt
import pandas as pd

recipe = input("Enter recipe name: ")

pop = pd.read_csv(recipe)

pop["Amount"] = pop["Amount"] * 2

print(pop)
