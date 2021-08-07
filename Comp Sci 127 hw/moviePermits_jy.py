#Name: Julia Yu
#Date: October 18, 2019
#Email: julia.yu83@myhunter.cuny.edu
#Looks through a csv file and prints the number of permits in total and for each 
# borough, and the most popular locations

import pandas as pd

fileName = input("Enter file name: ")
movies = pd.read_csv(fileName)
print("There were", movies["Borough"].count(), "film permits")

print(movies["Borough"].value_counts())
print("The five most popular filming locations were:")
print(movies["ParkingHeld"].value_counts()[:5])
