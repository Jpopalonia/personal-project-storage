# this script increments the value in the sidecar file each time it is ran

import os

dir = os.getcwd()
file = open("count.txt", "r")
oldCount = int(file.read())
file.close()
file = open("count.txt", "w")
newCount = oldCount + 1
file.write(str(newCount))
print(newCount)
file.close()