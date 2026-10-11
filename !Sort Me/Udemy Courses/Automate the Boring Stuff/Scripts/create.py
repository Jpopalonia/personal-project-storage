# create files named Lesson X, where is is 1 - 51
# one for each lesson

#hellofile = open("hello.py", "w")
#hellofile.close()

import os

for i in range (1, 52):
  file = open("Scripts/Lesson " + str(i) + ".py", "w")
  file.write("# This file is for Lesson " + str(i))
  file.close()