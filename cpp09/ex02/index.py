import os
import random

lst = list(range(8))
random.shuffle(lst)

lst = list(map(str, lst))

args = (" ".join(lst))

# print(args)

os.system ("./PmergeMe " + args  + " > outfile")


content = open("outfile").read()
content = content[content.index("After:") + len("After:"):].strip()
content = content[:content.index("Time")].strip()
args    = content.split(" ")
args    = list(map(int, args))


with open("args", "w") as fp:
	fp.write(str(args))

with open("sorted_args", "w") as fp:
	fp.write(str(sorted(args)))

if (args == sorted(args)):
	print ("success!")
	exit()
print ("errr...")
for i in range(len(args)):
	if (args[i] != sorted(args)[i]):
		print (args[i])
		break
