#Name: Julia Yu
#Date: October 20, 2019
#Email: julia.yu83@myhunter.cuny.edu
#Binary to decimal converter

binString = input("Enter a binary number: ")
decNum = 0

for c in binString:
    decNum = decNum * 2
    if c == "1":
        decNum = decNum + 1

print("Your number in decimal is:", decNum)