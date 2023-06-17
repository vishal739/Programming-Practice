
import math
# cg= float
# fh= float
cg= 0
fh= 0

print("Choose option: ")
print("1) To convert Centigrade to Fahrenheit ")
print("2) To convert Fahrenheit to Centigrade \n ")
key= int(input("Press your option"))
if key==1:
    cg= float(input("Give temp in Centigrade "))
    fh= (cg*(9/5)+32)
    print("Temperature in Fahrenheit- ",fh)
elif key==2:
    fh= float(input("Give temp in Fahrenheit "))
    cg= (fh-32)*(5/9)
    print("Temperature in Centigrade - ",cg)
else:
    print("invalid choice")
# a=459
# b= int
# c= 0
#  while a!=0:
#      b= a%10
#    c= c*10+b
#     a //=10
    
#  print(str(c))
# print(3*31536000)

# (input("Give Temp in Centigrade "))

