#Name: Julia Yu
#Date: October 31, 2019
#Email: julia.yu83@myhunter.cuny.edu
#This program reads in a csv file and puts the collision locations on the map

import pandas as pd
import folium

inFile = input("Enter csv file name: ")
outFile = input("Enter output file: ")

crashes = pd.read_csv(inFile)
nycMap = folium.Map(location=[40.768731, -73.964915])
crashes.sort_values(by=["LONGITUDE"])

for index, row in crashes.iterrows():
    lat = row["LATITUDE"]
    lon = row["LONGITUDE"]
    time = row["TIME"]
    markThing = folium.Marker([lat, lon], popup=time)
    markThing.add_to(nycMap)

nycMap.save(outfile= outFile)
