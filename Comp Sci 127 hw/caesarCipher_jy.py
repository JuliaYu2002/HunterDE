#Name: Julia Yu
#Email: julia.yu83@myhunter.cuny.edu
#Date: August 28, 2019
#This program takes a user's input and encrypts it using the Caesar Cipher, shifting 13 places to the right

def encrypt(text, s):
    result = "" #the converted string

    for i in range(len(text)):
        char = text[i] #loops through the text entered
        if (char.isupper()): #checks if the letter in the position i is capital or not
            result += chr((ord(char) + s-65) % 26 + 65) 
            #uses the conversion table to match the ascii translated letter after shifting by 13 and using module to loop through the alphabet
        else:
            result += chr((ord(char) + s - 97) % 26 + 97) 

    return result

text = input("Enter a word: ")
s = 13 #the amount to shift by
print("Cipher: " + encrypt(text, s))
