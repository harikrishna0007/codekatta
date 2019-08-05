try:
	def power(base,exponent):
	     if(exponent==1):
	          return(base)
	     if(exponent!=1):
	          return(base*power(base,exponent-1))
	base=int(input())
	exponent=int(input())
	print(power(base,exponent))
except:
	print("InvalidInput")
