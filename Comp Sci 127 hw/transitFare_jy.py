#Modified by: Julia Yu
#Date: October 20, 2019
#Email: julia.yu83@myhunter.cuny.edu
#A template for a program that computes Copenhagen transit fares.

def computeFare(zone, ticketType):
    """
    Takes as two parameters: the zone and the ticket type.
    Returns the Copenhagen Transit fare, as follows:
    If the zone is 2 or smaller and the ticket type is "adult", the fare is 23.
    If the zone is 2 or smaller and the ticket type is "child", the fare is 11.5.
    If the zone is 3 and the ticket type is "adult", the fare is 34.5.
    If the zone is 3 or 4 and the ticket type is "child", the fare is 23.
    If the zone is 4 and the ticket type is "adult", the fare is 46.
    If the zone is greater than 4, return a negative number (since your calculator does not handle inputs that high).
    """
    fare = 0
    if zone <= 2 and ticketType == "adult":
        fare = 23
    elif zone <= 2 and ticketType == "child":
        fare = 11.5
    elif zone == 3 and ticketType == "adult":
        fare = 34.5
    elif (zone == 3 or zone == 4) and ticketType == "child":
        fare = 23
    elif zone == 4 and ticketType == "adult":
        fare = 46
    elif zone > 4:
        return (-1)

    return(fare)

def main():
    z = int(input('Enter the number of zones: '))
    t = input('Enter the ticket type (adult/child): ').lower()
    fare = computeFare(z,t)
    print('The fare is', fare)

#Allow script to be run directly:
if __name__ == "__main__":
     main()
