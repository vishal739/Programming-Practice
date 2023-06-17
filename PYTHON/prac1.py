n=int(input("Enter the size of pattern : "))
for i in range(1,n+1):
  for j in range(1,i+1):
    print(pow(2,i-1),end=' ')
    i-=1
  print()