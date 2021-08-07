#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 30, 2019
#This program takes a user's input and loops through it to get the percentage of it that is C or G

dnaStr = input("Enter a DNA string: ").upper()
totalCG = 0

for a in range(len(dnaStr)):
    if (dnaStr[a] == "G" or dnaStr[a] == "C"):
        totalCG = totalCG + 1

ratio = float(totalCG)/float(len(dnaStr))
print("Length is", len(dnaStr))
print("GC-content is", ratio)
