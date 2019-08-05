try:
	low = int(input())
	upp = int(input())
	for number in range(low,upp + 1):
	     if number > 1:
	          for i in range(2,number):
	               if (number % i) == 0:
            	        break
	          else:
	                 print(number)
except:
	print("Invalid Input")
