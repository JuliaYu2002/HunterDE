#Name: Julia Yu
#Date: October 18, 2019
#Email: julia.yu83@myhunter.cuny.edu
#Asks for a category and returns the worst offenders

import pandas as pd

csvFile = input('Enter CSV file name: ')  # Name of the CSV file
category = input("Enter attribute: ")
tickets = pd.read_csv(csvFile)  # Read in the file to a dataframe
print("The 10 worst offenders are:")
print(tickets[category].value_counts()[:10])  # Print out the dataframe
