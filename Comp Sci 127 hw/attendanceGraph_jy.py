#Name: Julia Yu
#Date: October 18, 2019
#Email: julia.yu83@myhunter.cuny.edu
#This program plots attendance on a graph from a specified file and saves it to another

import pandas as pd
import matplotlib.pyplot as plt

inFile = input("Enter name of input file: ")
outFile = input("Enter name of output file: ")
attend = pd.read_csv(inFile)
attend["Date"] = pd.to_datetime(attend["Date"].apply(str))
attend["% Attending"] = (attend["Present"] / attend["Enrolled"]) * 100
attend.plot(x = "Date", y = "% Attending")

graph = plt.gcf()
graph.savefig(outFile)
# plt.show()