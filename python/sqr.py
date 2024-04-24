def power(a, n):
    ret = 1
    while n > 0:
        if n % 2 != 0:
            ret *= a
        a *= a
        n //= 2        
  
    return ret
    
print(power(5, 5))
print(power(5, 21))
