spam = 1
eggs = 'nope'
beeglist = list(range(0, 101, 2))

all_vars = dir()
  
# Iterate over the whole list where dir() is stored.
for name in all_vars:
  # Print the item if it doesn't start with double underscore
  if not name.startswith('__'):
    myvalue = eval(name)
    print(name, "is", type(myvalue), "and is equal to", myvalue)