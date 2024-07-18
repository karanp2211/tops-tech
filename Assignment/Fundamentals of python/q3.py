# Write a Python program to get the Fibonacci series of given range.


n1,n2=0,1
f_series=[]
num = int(input("Enter the range: "))
while n1 <= num:
    f_series.append(n1)
    n1,n2=n2,n1 +n2

print("Fibonacci Series = ",num,f_series)    
