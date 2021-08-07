#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: September 6, 2019
#This program takes in a number of seconds and outputs it converted into a number of seconds, minutes and hours

time = int(input("Enter a number of seconds: "))

hours = time // 3600
print("Hours:", hours)

remain = time % 3600

minutes = remain // 60
print("Minutes:", minutes)

seconds = remain % 60
print("Seconds:", seconds)
