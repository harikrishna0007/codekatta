try:
	h=[]
	r=int(input())
	for i in range(1,r+1):
	    b=int(input())
	    h.append(b)
	h.sort()
	print(h[r-1])
except:
	print("InvalidInput")
