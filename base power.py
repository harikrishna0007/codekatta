try:
	def power(bas,exponent):
	     if(exponent==1):
	          return(bas)
	     if(exponent!=1):
	          return(bas*power(bas,exponent-1))
	bas=int(input())
	exponent=int(input())
	print(power(bas,exponent))
except:
	print("InvalidInput")
