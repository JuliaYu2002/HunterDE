#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 27, 2019
#This program takes a user's input and prints the ASCII translation

phrase = input("Enter a phrase: ")

print("In ASCII:")
for a in phrase:
    print(ord(a))
