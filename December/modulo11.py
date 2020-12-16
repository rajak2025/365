def remainder(st) : 
      
    # len is variable to store the 
    # length of number string. 
    ln = len(st) 
      
    rem = 0
      
    # loop that find remainder 
    for i in range(0, ln) : 
        num = rem * 10 + (int)(st[i]) 
        rem = num % 11
          
    return rem 
      
      
# Driver code 
st = "121"
print(remainder(st)) 
  