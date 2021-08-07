#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 13, 2019
#This program takes in a list of names from the user and abbreviates the first names

lastFirst = input("Please enter your list of names: ")
namesList = lastFirst.split("; ")

for name in namesList:
    newList = name.split(", ")
    first = newList[1]
    last = newList[0]
    print(first[0] + ".", last)