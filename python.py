years = 1000000
zins = 1 + (0.001 / 100)
start = 0.00001
for x in range(years):
 print("Years: "+ x.__str__())
 print(start * pow(zins, x))