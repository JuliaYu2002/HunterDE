#Name: Julia Yu
#Date: October 31, 2019
#Email: julia.yu83@myhunter.cuny.edu
#This program uses folium to make a map centered on NYC and had a stamp on Hunter's location

import folium

nycMap = folium.Map(location=[40.75, -74.125], zoom_start=10)
folium.Marker(location = [40.768731, -73.964915], popup= "Hunter College").add_to(nycMap)
nycMap.save(outfile= "nycMap.html")