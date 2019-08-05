try:
	c = []
	num = int(input())
	for n in range(num):
	    numb = int(input())
	    c.append(numb)
	print(min(c))
except:
	print("InvalidInput")
