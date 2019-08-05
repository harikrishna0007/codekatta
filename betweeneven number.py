try:
	low=int(input())
	upp=int(input())
	for i in range(low+1,upp):
	     if(i%2==0):
	          print(i)
except:
	print("Invalid Input")
