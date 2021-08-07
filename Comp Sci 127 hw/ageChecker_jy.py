#Name: Julia Yu
#Date: October 31, 2019
#Email: julia.yu83@myhunter.cuny.edu
#This program prevents you from entering a negative number

age = int(input('Please enter age: '))

while age < 0:
    print('Entered a negative number.')
    age = int(input('Please enter age: '))
print('You entered your age as:', age)
