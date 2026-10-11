# TODO: put named pieces into an array rather than having the pieces represented by numbers

import random
import time

random.seed(time.time())

values = []

for i in range(0, 7):
  values.append(i)

shuffledValues = []
for i in range(len(values)):
  shuffledValues.append(values[i])
random.shuffle(shuffledValues)

print(shuffledValues)

for i in range(len(shuffledValues)):
  piece = shuffledValues[0]
  print(shuffledValues.pop())
