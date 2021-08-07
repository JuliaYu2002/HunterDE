#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 30, 2019
#This program takes entered words in and returns them in a pre-made sentence

noun = input("Enter a noun: ")
verb1 = input("Enter a verb: ")
verb2 = input("Enter another verb: ")
template = "If it verb1 like a noun and verb2 like a noun, it probably is a noun."
template = template.replace("noun", noun)
template = template.replace("verb1", verb1)
template = template.replace("verb2", verb2)

print(template)