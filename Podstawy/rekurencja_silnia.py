def silnia_re(n):
    
    if n < 0:
        return None
    
    elif n == 0 or n == 1:
        return 1
    
    return silnia_re(n-1) * n

    
print(silnia_re(8))